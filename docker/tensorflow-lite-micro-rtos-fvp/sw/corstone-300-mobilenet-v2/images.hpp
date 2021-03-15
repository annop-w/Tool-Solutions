/*
 * Copyright (c) 2021 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//---------------------------------------------
// This file was autogenerated by the script
// convert_images_to_cpp.sh
// Do not edit
//---------------------------------------------

#ifndef IMAGES_HPP
#define IMAGES_HPP

#include <cstdint>

#define NUMBER_OF_IMAGES  (5U)
#define IMAGE_DATA_SIZE  (150528U)

extern const unsigned char Bonnie_and_Clyde_Movie_Car[IMAGE_DATA_SIZE];
extern const unsigned char Dog_Breeds[IMAGE_DATA_SIZE];
extern const unsigned char JP_Kyoto_kimono[IMAGE_DATA_SIZE];
extern const unsigned char POV_cat[IMAGE_DATA_SIZE];
extern const unsigned char Summer_Bicycle[IMAGE_DATA_SIZE];



const char* get_image_name(const uint32_t fileindex);
const unsigned char* get_image_pointer(const uint32_t fileindex);
uint32_t get_image_len(const uint32_t fileindex);

#endif /* IMAGES_HPP */
