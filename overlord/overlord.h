#pragma once
#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
  K000, K001, K002, K003, K004,    K004B, K003B, K002B, K001B, K000B, \
  K100, K101, K102, K103, K104,    K104B, K103B, K102B, K101B, K100B, \
  K200, K201, K202, K203, K204,    K204B, K203B, K202B, K201B, K200B, \
              K302, K303, K304,    K304B, K303B, K302B                \
  ) \
  { \
    { K000, K001, K002, K003, K004 }, \
    { K100, K101, K102, K103, K104 }, \
    { K200, K201, K202, K203, K204 }, \
    { ___,  ___,  K302, K303, K304 }, \
    { K000B, K001B, K002B, K003B, K004B }, \
    { K100B, K101B, K102B, K103B, K104B }, \
    { K200B, K201B, K202B, K203B, K204B }, \
    { ___,   ___,   K302B, K303B, K304B }  \
  }

//#define LAYOUT LAYOUT_split_3x5_3
