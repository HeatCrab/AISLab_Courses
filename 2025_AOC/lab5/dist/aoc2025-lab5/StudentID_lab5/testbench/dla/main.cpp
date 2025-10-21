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
int main(int argc, char *argv[]) {
  setbuf(stdout, NULL);  // Immediate output

  struct test_data data;
  struct parsed_arg arg;

  if (parse_arg(argc, argv, &arg)) {
    return 1;
  }

  // Proceed with the rest of the program logic
  fprintf(stdout, "=============================================\n");
  fprintf(stdout, "Input file: %s\n", arg.input_file);
  fprintf(stdout, "Weight file: %s\n", arg.weight_file);
  fprintf(stdout, "Class index: %d\n", arg.class_index);
  fprintf(stdout, "Image index: %d\n", arg.image_index);
  fprintf(stdout, "=============================================\n");

  // load data
  data = load_bin_data(arg.input_file);
  // load weight
  load_weight(arg.weight_file);

  fprintf(stdout, "Image Test: %d/10 image class %12s  \n", arg.image_index,
          data.classes_name[arg.class_index]);

  // activate dla
  dla_init();

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

  // free data
  free_test_data(data);

  // finalize dla
  dla_final();
  return 0;
}
