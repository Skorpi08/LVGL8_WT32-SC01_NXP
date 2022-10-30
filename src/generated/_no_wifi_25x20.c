/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_LARGE_CONST
#define LV_ATTRIBUTE_LARGE_CONST
#endif

#ifndef LV_ATTRIBUTE_IMG__NO_WIFI_25X20
#define LV_ATTRIBUTE_IMG__NO_WIFI_25X20
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__NO_WIFI_25X20 uint8_t _no_wifi_25x20_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0xff, 0xff, 0xe0, 0xff, 0xff, 0xd7, 0x9e, 0xf7, 0x6c, 0x7d, 0xef, 0x00, 0x9e, 0xf7, 0x00, 0x9e, 0xf7, 0x00, 0x9e, 0xf7, 0x38, 0x9e, 0xf7, 0x81, 0x9e, 0xf7, 0xb5, 0x9e, 0xf7, 0xd4, 0x9e, 0xf7, 0xe5, 0x9e, 0xf7, 0xed, 0x9e, 0xf7, 0xf0, 0x9e, 0xf7, 0xed, 0x9e, 0xf7, 0xe5, 0x9e, 0xf7, 0xd4, 0x9e, 0xf7, 0xb5, 0x9e, 0xf7, 0x81, 0x9e, 0xf7, 0x38, 0x9e, 0xf7, 0x00, 0x9e, 0xf7, 0x00, 0x9e, 0xf7, 0x00, 0x9e, 0xf7, 0x00, 0x7d, 0xef, 0x00, 0x9e, 0xf7, 0x00, 
  0xff, 0xff, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xff, 0x91, 0xff, 0xff, 0x46, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xdd, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xdd, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0x9e, 0xf7, 0x73, 0xff, 0xff, 0xdc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xec, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xec, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xdb, 0xff, 0xff, 0x84, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0x9e, 0xf7, 0x00, 0xff, 0xff, 0x48, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xbb, 0xff, 0xff, 0x8e, 0xff, 0xff, 0x69, 0xff, 0xff, 0x52, 0xff, 0xff, 0x49, 0xff, 0xff, 0x52, 0xff, 0xff, 0x6a, 0xff, 0xff, 0x90, 0xff, 0xff, 0xbd, 0xff, 0xff, 0xe6, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xac, 0xff, 0xff, 0x27, 0xff, 0xff, 0x00, 
  0x9e, 0xf7, 0x3b, 0xff, 0xff, 0x73, 0xff, 0xff, 0x2a, 0xff, 0xff, 0xa4, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0x95, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x4c, 0xff, 0xff, 0xa2, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xbe, 0xff, 0xff, 0x33, 
  0x9e, 0xf7, 0xbb, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xb5, 0xff, 0xff, 0x39, 0xff, 0xff, 0x81, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xa7, 0xff, 0xff, 0x25, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x56, 0xff, 0xff, 0xc2, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xbb, 
  0x9e, 0xf7, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0x7c, 0xff, 0xff, 0x00, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xcd, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xc5, 0xff, 0xff, 0x55, 0xff, 0xff, 0x39, 0xff, 0xff, 0x47, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x13, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x1b, 0xff, 0xff, 0xa7, 0xff, 0xff, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 
  0x3c, 0xe7, 0xcb, 0xbe, 0xf7, 0xee, 0xbe, 0xf7, 0x9f, 0xbe, 0xf7, 0x0b, 0xdf, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x2f, 0xff, 0xff, 0xb1, 0xff, 0xff, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xff, 0xff, 0xe2, 0xff, 0xff, 0xe8, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xd2, 0xff, 0xff, 0xac, 0xff, 0xff, 0x69, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x01, 0xdf, 0xff, 0x00, 0xbe, 0xf7, 0x00, 0xbe, 0xf7, 0xa0, 0xbe, 0xf7, 0xee, 0xbe, 0xf7, 0xcb, 
  0x2c, 0x63, 0x3d, 0x6d, 0x6b, 0x5b, 0x6d, 0x6b, 0x06, 0x4d, 0x6b, 0x00, 0xb6, 0xb5, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x45, 0xff, 0xff, 0x28, 0xff, 0xff, 0x8e, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xbc, 0xff, 0xff, 0x55, 0xff, 0xff, 0x00, 0xb6, 0xb5, 0x00, 0x4d, 0x6b, 0x00, 0x6d, 0x6b, 0x06, 0x4d, 0x6b, 0x5b, 0x71, 0x8c, 0x3d, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0xa5, 0x00, 0xff, 0xff, 0x81, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xc6, 0xff, 0xff, 0x4c, 0xff, 0xff, 0x69, 0xff, 0xff, 0xd6, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0x7b, 0x34, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x63, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0xa5, 0x70, 0xff, 0xff, 0xec, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd1, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x40, 0xff, 0xff, 0xbc, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xe2, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0x34, 0xa5, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x63, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0xa5, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0x87, 0xff, 0xff, 0x1e, 0xff, 0xff, 0x00, 0xff, 0xff, 0x13, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xff, 0xbc, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x9d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x63, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb2, 0x94, 0x63, 0x5d, 0xef, 0xd8, 0x5d, 0xef, 0xcd, 0x5d, 0xef, 0x5a, 0x5d, 0xef, 0x00, 0x5d, 0xef, 0x00, 0x5d, 0xef, 0x01, 0x5d, 0xef, 0x00, 0x3c, 0xe7, 0x00, 0x9e, 0xf7, 0x78, 0xff, 0xff, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xd1, 0x7d, 0xef, 0xd6, 0x92, 0x94, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x63, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x45, 0x29, 0x00, 0x28, 0x42, 0x31, 0x28, 0x42, 0x26, 0x28, 0x42, 0x00, 0x28, 0x42, 0x01, 0x49, 0x4a, 0x01, 0x8a, 0x52, 0x00, 0x8a, 0x52, 0x00, 0x49, 0x4a, 0x1e, 0xf7, 0xbd, 0x00, 0xff, 0xff, 0x4f, 0xff, 0xff, 0xc6, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xcf, 0x59, 0xce, 0x66, 0xd3, 0x9c, 0x00, 0xb2, 0x94, 0x00, 0xb2, 0x94, 0x00, 0x8e, 0x73, 0x00, 0x2c, 0x63, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x52, 0x00, 0x9a, 0xd6, 0x4c, 0xdb, 0xde, 0xb9, 0xdb, 0xde, 0xd8, 0x7d, 0xef, 0xb5, 0xff, 0xff, 0x40, 0xff, 0xff, 0x22, 0xff, 0xff, 0xa9, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0xff, 0xff, 0x80, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x38, 0xc6, 0x00, 0x0c, 0x63, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0x15, 0xbe, 0xf7, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbb, 0xba, 0xd6, 0x00, 0x79, 0xce, 0x00, 0x1c, 0xe7, 0x86, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xa4, 0xff, 0xff, 0x1f, 0x38, 0xc6, 0x00, 0xeb, 0x5a, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0x59, 0x9e, 0xf7, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7d, 0xef, 0xe9, 0xcb, 0x5a, 0x4b, 0x00, 0x00, 0x00, 0x71, 0x8c, 0x00, 0xdf, 0xff, 0x60, 0xff, 0xff, 0xd0, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xc2, 0x1c, 0xe7, 0x4b, 0x75, 0xad, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0x61, 0x9e, 0xf7, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7d, 0xef, 0xec, 0xcb, 0x5a, 0x52, 0x00, 0x00, 0x00, 0x51, 0x8c, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x37, 0xff, 0xff, 0xb4, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0x7d, 0xef, 0x6f, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x63, 0x2c, 0x9e, 0xf7, 0xd4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7d, 0xef, 0xcc, 0xaa, 0x52, 0x1c, 0x00, 0x00, 0x00, 0xef, 0x7b, 0x00, 0x3c, 0xe7, 0x01, 0x5d, 0xef, 0x00, 0x5d, 0xef, 0x00, 0xbe, 0xf7, 0x93, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0x7d, 0xef, 0xcf, 
  0x2c, 0x63, 0x00, 0x2c, 0x63, 0x00, 0x2c, 0x63, 0x00, 0x2c, 0x63, 0x00, 0x2c, 0x63, 0x00, 0x2c, 0x63, 0x00, 0x2c, 0x63, 0x00, 0x2c, 0x63, 0x00, 0x0c, 0x63, 0x00, 0x51, 0x8c, 0x00, 0xbe, 0xf7, 0x6e, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xee, 0xff, 0xff, 0xd3, 0x9e, 0xf7, 0x64, 0x10, 0x84, 0x00, 0x0c, 0x63, 0x00, 0x6d, 0x6b, 0x00, 0x10, 0x84, 0x00, 0x10, 0x84, 0x00, 0xef, 0x7b, 0x00, 0xb6, 0xb5, 0x00, 0x9e, 0xf7, 0x6f, 0xbe, 0xf7, 0xce, 0x5d, 0xef, 0xa5, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0xff, 0xff, 0xe0, 0xff, 0xff, 0xd7, 0xf7, 0x9e, 0x6c, 0xef, 0x7d, 0x00, 0xf7, 0x9e, 0x00, 0xf7, 0x9e, 0x00, 0xf7, 0x9e, 0x38, 0xf7, 0x9e, 0x81, 0xf7, 0x9e, 0xb5, 0xf7, 0x9e, 0xd4, 0xf7, 0x9e, 0xe5, 0xf7, 0x9e, 0xed, 0xf7, 0x9e, 0xf0, 0xf7, 0x9e, 0xed, 0xf7, 0x9e, 0xe5, 0xf7, 0x9e, 0xd4, 0xf7, 0x9e, 0xb5, 0xf7, 0x9e, 0x81, 0xf7, 0x9e, 0x38, 0xf7, 0x9e, 0x00, 0xf7, 0x9e, 0x00, 0xf7, 0x9e, 0x00, 0xf7, 0x9e, 0x00, 0xef, 0x7d, 0x00, 0xf7, 0x9e, 0x00, 
  0xff, 0xff, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xff, 0x91, 0xff, 0xff, 0x46, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xdd, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xdd, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xf7, 0x9e, 0x73, 0xff, 0xff, 0xdc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xec, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xec, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xdb, 0xff, 0xff, 0x84, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xf7, 0x9e, 0x00, 0xff, 0xff, 0x48, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xbb, 0xff, 0xff, 0x8e, 0xff, 0xff, 0x69, 0xff, 0xff, 0x52, 0xff, 0xff, 0x49, 0xff, 0xff, 0x52, 0xff, 0xff, 0x6a, 0xff, 0xff, 0x90, 0xff, 0xff, 0xbd, 0xff, 0xff, 0xe6, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xac, 0xff, 0xff, 0x27, 0xff, 0xff, 0x00, 
  0xf7, 0x9e, 0x3b, 0xff, 0xff, 0x73, 0xff, 0xff, 0x2a, 0xff, 0xff, 0xa4, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0x95, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x4c, 0xff, 0xff, 0xa2, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xbe, 0xff, 0xff, 0x33, 
  0xf7, 0x9e, 0xbb, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xb5, 0xff, 0xff, 0x39, 0xff, 0xff, 0x81, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xa7, 0xff, 0xff, 0x25, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x56, 0xff, 0xff, 0xc2, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xbb, 
  0xf7, 0x9e, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0x7c, 0xff, 0xff, 0x00, 0xff, 0xff, 0x5c, 0xff, 0xff, 0xcd, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xc5, 0xff, 0xff, 0x55, 0xff, 0xff, 0x39, 0xff, 0xff, 0x47, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x13, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x1b, 0xff, 0xff, 0xa7, 0xff, 0xff, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 
  0xe7, 0x3c, 0xcb, 0xf7, 0xbe, 0xee, 0xf7, 0xbe, 0x9f, 0xf7, 0xbe, 0x0b, 0xff, 0xdf, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x2f, 0xff, 0xff, 0xb1, 0xff, 0xff, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xff, 0xff, 0xe2, 0xff, 0xff, 0xe8, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xd2, 0xff, 0xff, 0xac, 0xff, 0xff, 0x69, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x01, 0xff, 0xdf, 0x00, 0xf7, 0xbe, 0x00, 0xf7, 0xbe, 0xa0, 0xf7, 0xbe, 0xee, 0xf7, 0xbe, 0xcb, 
  0x63, 0x2c, 0x3d, 0x6b, 0x6d, 0x5b, 0x6b, 0x6d, 0x06, 0x6b, 0x4d, 0x00, 0xb5, 0xb6, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x45, 0xff, 0xff, 0x28, 0xff, 0xff, 0x8e, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xbc, 0xff, 0xff, 0x55, 0xff, 0xff, 0x00, 0xb5, 0xb6, 0x00, 0x6b, 0x4d, 0x00, 0x6b, 0x6d, 0x06, 0x6b, 0x4d, 0x5b, 0x8c, 0x71, 0x3d, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x34, 0x00, 0xff, 0xff, 0x81, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xc6, 0xff, 0xff, 0x4c, 0xff, 0xff, 0x69, 0xff, 0xff, 0xd6, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0x7b, 0xa5, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x34, 0x70, 0xff, 0xff, 0xec, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd1, 0xff, 0xff, 0x3c, 0xff, 0xff, 0x40, 0xff, 0xff, 0xbc, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xe2, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xa5, 0x34, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x2c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x34, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0x87, 0xff, 0xff, 0x1e, 0xff, 0xff, 0x00, 0xff, 0xff, 0x13, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xff, 0xbc, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x9d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x2c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0xb2, 0x63, 0xef, 0x5d, 0xd8, 0xef, 0x5d, 0xcd, 0xef, 0x5d, 0x5a, 0xef, 0x5d, 0x00, 0xef, 0x5d, 0x00, 0xef, 0x5d, 0x01, 0xef, 0x5d, 0x00, 0xe7, 0x3c, 0x00, 0xf7, 0x9e, 0x78, 0xff, 0xff, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xd1, 0xef, 0x7d, 0xd6, 0x94, 0x92, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x2c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x29, 0x45, 0x00, 0x42, 0x28, 0x31, 0x42, 0x28, 0x26, 0x42, 0x28, 0x00, 0x42, 0x28, 0x01, 0x4a, 0x49, 0x01, 0x52, 0x8a, 0x00, 0x52, 0x8a, 0x00, 0x4a, 0x49, 0x1e, 0xbd, 0xf7, 0x00, 0xff, 0xff, 0x4f, 0xff, 0xff, 0xc6, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xcf, 0xce, 0x59, 0x66, 0x9c, 0xd3, 0x00, 0x94, 0xb2, 0x00, 0x94, 0xb2, 0x00, 0x73, 0x8e, 0x00, 0x63, 0x2c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0xaa, 0x00, 0xd6, 0x9a, 0x4c, 0xde, 0xdb, 0xb9, 0xde, 0xdb, 0xd8, 0xef, 0x7d, 0xb5, 0xff, 0xff, 0x40, 0xff, 0xff, 0x22, 0xff, 0xff, 0xa9, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0xff, 0xff, 0x80, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xc6, 0x38, 0x00, 0x63, 0x0c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x4d, 0x15, 0xf7, 0xbe, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xbb, 0xd6, 0xba, 0x00, 0xce, 0x79, 0x00, 0xe7, 0x1c, 0x86, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xa4, 0xff, 0xff, 0x1f, 0xc6, 0x38, 0x00, 0x5a, 0xeb, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x4d, 0x59, 0xf7, 0x9e, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x7d, 0xe9, 0x5a, 0xcb, 0x4b, 0x00, 0x00, 0x00, 0x8c, 0x71, 0x00, 0xff, 0xdf, 0x60, 0xff, 0xff, 0xd0, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xc2, 0xe7, 0x1c, 0x4b, 0xad, 0x75, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x4d, 0x61, 0xf7, 0x9e, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x7d, 0xec, 0x5a, 0xcb, 0x52, 0x00, 0x00, 0x00, 0x8c, 0x51, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x37, 0xff, 0xff, 0xb4, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xef, 0x7d, 0x6f, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x2c, 0x2c, 0xf7, 0x9e, 0xd4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x7d, 0xcc, 0x52, 0xaa, 0x1c, 0x00, 0x00, 0x00, 0x7b, 0xef, 0x00, 0xe7, 0x3c, 0x01, 0xef, 0x5d, 0x00, 0xef, 0x5d, 0x00, 0xf7, 0xbe, 0x93, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xef, 0x7d, 0xcf, 
  0x63, 0x2c, 0x00, 0x63, 0x2c, 0x00, 0x63, 0x2c, 0x00, 0x63, 0x2c, 0x00, 0x63, 0x2c, 0x00, 0x63, 0x2c, 0x00, 0x63, 0x2c, 0x00, 0x63, 0x2c, 0x00, 0x63, 0x0c, 0x00, 0x8c, 0x51, 0x00, 0xf7, 0xbe, 0x6e, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xee, 0xff, 0xff, 0xd3, 0xf7, 0x9e, 0x64, 0x84, 0x10, 0x00, 0x63, 0x0c, 0x00, 0x6b, 0x6d, 0x00, 0x84, 0x10, 0x00, 0x84, 0x10, 0x00, 0x7b, 0xef, 0x00, 0xb5, 0xb6, 0x00, 0xf7, 0x9e, 0x6f, 0xf7, 0xbe, 0xce, 0xef, 0x5d, 0xa5, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _no_wifi_25x20 = {
  .header.always_zero = 0,
  .header.w = 25,
  .header.h = 20,
  .data_size = 500 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _no_wifi_25x20_map,
};
