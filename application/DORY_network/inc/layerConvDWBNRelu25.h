/*
 * layer_template_h.h
 * Alessio Burrello <alessio.burrello@unibo.it>
 *
 * Copyright (C) 2019-2020 University of Bologna
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. 
 */

// optional_type                  8bit
// func_name                      layerConvDWBNRelu25
// flag_DW                        1
// optional                       conv
// FLAG_BATCHNORM                 1
// has_bias                       0
// FLAG_RELU                      1
// test_location                  L3
// platform                       GAP8
// chip                           GAPv2
// type                           char
// nof                            1024
// factor                         1
// g                              1024
// nif                            1
// conv_overlap1                  2
// conv_overlap2                  2
// padding_top                    1
// padding_bottom                 1
// padding_left                   1
// padding_right                  1
// stride                         1
// x_h                            4
// x_w                            4
// x_data_size_byte               8
// x_tile_size_nif                320
// x_tile_size_h                  4
// x_tile_size_w                  4
// x_tile_size_byte               5120
// x_tile_size_nif_byte           320
// x_stride_w_byte                4096
// x_stride_c_byte                1024
// y_h                            4
// y_w                            4
// y_data_size_byte               8
// act_dim_bit                    32
// y_tile_size_nof                320
// y_tile_size_h                  4
// y_tile_size_w                  4
// y_tile_size_byte               5120
// y_stride_w_byte                4096
// y_stride_c_byte                1024
// y_tile_size_nof_byte           320
// tile_dim_h                     1
// tile_dim_w                     1
// tile_dim_nof                   4
// tile_dim_nif                   4
// fs1                            3
// fs2                            3
// W_data_size_byte               8
// W_tile_size_nof                320
// b_size_byte                    1024
// W_tile_size_nif                1
// W_tile_size_byte               2880
// W_stride_nof_byte              9
// W_stride_hw_byte               1
// W_tile_nif_byte                1
// l2_off_k                       9216
// l2_off_lambda                  13312
// l1_x_offset                    0
// l1_y_offset                    10244
// l1_W_offset                    20488
// l1_k_offset                    26252
// l1_lambda_offset               30352
// k_size_byte                    4096
// lambda_size_byte               4096
// k_tile_size_byte               1280
// lambda_tile_size_byte          1280
// x_tile_size_nif_last           64
// x_tile_size_nif_byte_last      64
// x_tile_size_h_last             4
// x_tile_size_w_last             4
// W_tile_size_nof_last           64
// W_tile_size_nif_last           1
// W_tile_size_nif_byte_last      1
// y_tile_size_nof_last           64
// y_tile_size_h_last             4
// y_tile_size_w_last             4
// y_length_nof_byte_last         64


#include "pulp.h"
#include "dory.h"

void  layerConvDWBNRelu25(
  void *args
);
