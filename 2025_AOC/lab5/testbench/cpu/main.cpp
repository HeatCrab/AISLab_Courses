#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

extern "C" {
#include "color.h"
#include "input.h"
#include "runtime.h"
#include "utils.h"
#include "weight.h"
}

extern int model_on_DLA(float *, float *);

/*
    Usage: -i [(input.bin)] -w [(weight.bin)] -c [class_index(0)] -n
   [image_index(0)]
*/

void single_test(const struct test_data data, const struct parsed_arg arg);
void full_test(const struct test_data data, const struct parsed_arg arg);

int main(int argc, char *argv[]) {
  setbuf(stdout, NULL); // Immediate output

  struct test_data data;
  struct parsed_arg arg;

  if (parse_arg(argc, argv, &arg)) {
    if (!arg.input_file || !arg.weight_file)
      return 1;
  }

  // load data
  data = load_bin_data(arg.input_file);
  // load weight
  load_weight(arg.weight_file);

  if (arg.class_index != -1 && arg.class_index != -1) {
    single_test(data, arg);
  } else {
    full_test(data, arg);
  }

  // free data
  free_test_data(data);

  return 0;
}

void single_test(const struct test_data data, const struct parsed_arg arg) {
  // Proceed with the rest of the program logic
  fprintf(stdout, "===============[ single test ]===============\n");
  fprintf(stdout, "Input file: %s\n", arg.input_file);
  fprintf(stdout, "Weight file: %s\n", arg.weight_file);
  fprintf(stdout, "Class index: %d\n", arg.class_index);
  fprintf(stdout, "Image index: %d\n", arg.image_index);
  fprintf(stdout, "=============================================\n");
  fprintf(stdout, "Image Test: %d/10 image class %12s  \n", arg.image_index,
          data.classes_name[arg.class_index]);

  float model_out[10] = {0};
  float predict[10] = {0};
  float normalized_image[3072] = {0};

  // preprocess
  normalize(data.input_data[arg.class_index][arg.image_index],
            normalized_image);

  // model predict
  model_on_DLA(normalized_image, model_out);

  // softmax layer of predict
  int max_arg = softmax(model_out, predict, 10);

  // print result
  fprintf(stdout, "\n\n=============================================\n");
  for (int i = 0; i < 10; i++) {
    if (arg.class_index == i) {
      fprintf(stdout, GREEN("[%12s]"), data.classes_name[i]);
    } else {
      fprintf(stdout, "[%12s]", data.classes_name[i]);
    }

    if (max_arg == i) {
      if (arg.class_index == i) {
        fprintf(stdout, GREEN("%8.3f%%\n"), predict[i] * 100);
      } else {
        fprintf(stdout, RED("%8.3f%%\n"), predict[i] * 100);
      }
    } else {
      fprintf(stdout, "%8.3f%%\n", predict[i] * 100);
    }
  }
  fprintf(stdout, "=============================================\n");
}

void full_test(const struct test_data data, const struct parsed_arg arg) {
  // Proceed with the rest of the program logic
  fprintf(stdout, "================[ full test ]================\n");
  fprintf(stdout, "Input file: %s\n", arg.input_file);
  fprintf(stdout, "Weight file: %s\n", arg.weight_file);
  fprintf(stdout, "=============================================\n");
  fprintf(stdout, GREEN("\'.\'") " is " GREEN("PASS") "," YELLOW(
                      "\'<num>\'") " is the " YELLOW("wrong prediction\n"));

  float model_out[10] = {0};
  float predict[10] = {0};
  float normalized_image[3072] = {0};

  int total = 0, correct = 0;

  fprintf(stdout, "\n\n=============================================\n");
  for (int c = 0; c < data.num_classes; c++) {
    fprintf(stdout, "[%2d - %15s]  ", c, data.classes_name[c]);
    for (int n = 0; n < data.num_per_classes; n++) {
      // preprocess
      normalize(data.input_data[c][n], normalized_image);

      // model predict
      model_on_DLA(normalized_image, model_out);

      // top-1 instead of softmax layer of prediction
      int max_arg = argmax(model_out, 10);

      // verify result
      if (max_arg == c) {
        fprintf(stdout, GREEN(". "));
        correct++;
      } else {
        fprintf(stdout, YELLOW("%d "), max_arg);
      }
      total++;
    }
    fprintf(stdout, "\n");
  }

  fprintf(stdout, VIBRANT_BLUE("\nCorrect") "/" BRIGHT_BLUE("Total: "));
  fprintf(stdout, VIBRANT_BLUE("%d") "/" BRIGHT_BLUE("%d\n"), correct, total);

  fprintf(stdout, "=============================================\n");
}