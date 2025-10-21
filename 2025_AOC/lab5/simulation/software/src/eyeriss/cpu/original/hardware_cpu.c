#include "hardware_cpu.h"

void conv_maxpooling(uint32_t input_C, uint32_t input_H, uint32_t input_W,
                     uint8_t* activation, uint32_t filter_N, uint32_t filter_C,
                     uint32_t filter_H, uint32_t filter_W, int8_t* filter,
                     int32_t* bias, uint32_t padding, uint8_t* output,
                     uint32_t scale) {

    //! hint>>
    uint32_t output_H = input_H >> 1;
    uint32_t output_W = input_W >> 1;

    for (uint32_t n = 0; n < filter_N; n++) {
        for (uint32_t h = 0; h < output_H; h++) {
            for (uint32_t w = 0; w < output_W; w++) {
                int32_t temp_out = INT32_MIN;
                for (uint32_t m_h = 0; m_h < 2; m_h++) {
                    for (uint32_t m_w = 0; m_w < 2; m_w++) {
                        int32_t temp = bias[n];
                        uint32_t origin_h = h * 2 + m_h;
                        uint32_t origin_w = w * 2 + m_w;
                        for (uint32_t c = 0; c < filter_C; c++) {
                            for (uint32_t fh = 0; fh < filter_H; fh++) {
                                for (uint32_t fw = 0; fw < filter_W; fw++) {
                                    int32_t in_h =
                                        (int32_t)origin_h + (int32_t)fh;
                                    int32_t in_w =
                                        (int32_t)origin_w + (int32_t)fw;
                                    if (in_h != 0 && in_h < (input_H + 1) &&
                                        in_w != 0 && in_w < (input_W + 1)) {
                                        uint32_t activation_index =
                                            c * input_H * input_W +
                                            (in_h - 1) * input_W + (in_w - 1);
                                        uint32_t filter_index =
                                            n * filter_C * filter_H * filter_W +
                                            c * filter_H * filter_W +
                                            fh * filter_W + fw;
                                        int32_t activation_val =
                                            activation[activation_index] - 128;
                                        int32_t weight_val =
                                            filter[filter_index];
                                        temp += activation_val * weight_val;
                                    }
                                }
                            }
                        }
                        if (temp_out < temp) temp_out = temp;
                    }
                }
                uint32_t temp_out_relu = relu(temp_out);
                uint8_t temp_out_final = requant(temp_out_relu, scale);
                output[n * output_H * output_W + h * output_W + w] =
                    temp_out_final;
            }
        }
    }
    //! hint<<
};

void conv(uint32_t input_C, uint32_t input_H, uint32_t input_W,
          uint8_t* activation, uint32_t filter_N, uint32_t filter_C,
          uint32_t filter_H, uint32_t filter_W, int8_t* filter, int32_t* bias,
          uint32_t padding, uint8_t* output, uint32_t scale) {

    //! hint>>
    for (uint32_t n = 0; n < filter_N; n++) {
        for (uint32_t h = 0; h < input_H; h++) {
            for (uint32_t w = 0; w < input_W; w++) {
                int32_t temp = bias[n];
                for (uint32_t c = 0; c < filter_C; c++) {
                    for (uint32_t fh = 0; fh < filter_H; fh++) {
                        for (uint32_t fw = 0; fw < filter_W; fw++) {
                            int32_t in_h = (int32_t)h + (int32_t)fh;
                            int32_t in_w = (int32_t)w + (int32_t)fw;
                            if (in_h != 0 && in_h < (input_H + padding) &&
                                in_w != 0 && in_w < (input_W + padding)) {
                                uint32_t activation_index =
                                    c * input_H * input_W +
                                    (in_h - 1) * input_W + (in_w - 1);
                                uint32_t filter_index =
                                    // f_index_upper +
                                    n * filter_C * filter_H * filter_W +
                                    c * filter_H * filter_W + fh * filter_W +
                                    fw;
                                int32_t activation_val =
                                    activation[activation_index] - 128;
                                int32_t weight_val = filter[filter_index];
                                temp += activation_val * weight_val;
                            }
                        }
                    }
                }
                uint32_t temp_relu = relu(temp);
                uint8_t temp_out = requant(temp_relu, scale);
                output[n * input_H * input_W + h * input_W + w] = temp_out;
            }
        }
    }
    //! hint<<
};

void linear_relu(uint32_t input_size, uint32_t output_size, uint8_t* activation,
                 uint8_t* output, int8_t* filter, int32_t* bias,
                 uint32_t scale) {
    //! hint>>
    for (uint32_t i = 0; i < output_size; i++) {
        int32_t temp = bias[i];
        int32_t activation_val;
        int32_t weight_val;
        for (uint32_t j = 0; j < input_size; j++) {
            activation_val = activation[j] - 128;
            weight_val = filter[i * input_size + j];
            temp += activation_val * weight_val;
        }
        uint32_t temp_relu = relu(temp);
        uint8_t temp_out = requant(temp_relu, scale);
        output[i] = temp_out;
    }
    //! hint<<
};

void linear(uint32_t input_size, uint32_t output_size, uint8_t* activation,
            uint8_t* output, int8_t* filter, int32_t* bias, uint32_t scale) {
    //! hint>>
    for (uint32_t i = 0; i < output_size; i++) {
        int32_t temp = bias[i];
        int32_t activation_val;
        int32_t weight_val;
        for (uint32_t j = 0; j < input_size; j++) {
            activation_val = activation[j] - 128;
            weight_val = filter[i * input_size + j];
            temp += activation_val * weight_val;
        }
        int8_t temp_shift = (temp >> scale);
        uint8_t temp_out = temp_shift + 128;
        output[i] = temp_out;
    }
    //! hint<<
};

void quantize(float* input_in_DRAM, uint8_t* output_in_DRAM, uint32_t size,
              uint32_t scale) {
    float fp_scale = 1;
    for (uint32_t i = 0; i < scale; i++) {
        fp_scale *= 2;
    }
    for (uint32_t i = 0; i < size; i++) {
        float t = input_in_DRAM[i] * fp_scale;
        int32_t temp = (int32_t)t + 128;
        // clamp to 0 ~ 255
        if (temp < 0) {
            output_in_DRAM[i] = 0;
        } else if (temp > 255)
            output_in_DRAM[i] = 255;
        else
            output_in_DRAM[i] = (uint8_t)temp;
    }
};

void dequantize(uint8_t* input_in_DRAM, float* output_in_DRAM, uint32_t size,
                uint32_t scale) {
    float fp_scale = 1;
    for (uint32_t i = 0; i < scale; i++) {
        fp_scale *= 2;
    }
    for (uint32_t i = 0; i < size; i++) {
        float temp = *(input_in_DRAM + i) - 128;
        *(output_in_DRAM + i) = temp / fp_scale;
    }
};
