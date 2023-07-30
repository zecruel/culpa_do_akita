/*
 */

#pragma once

#include "quantum.h"

// clang-format off
#define LAYOUT(                                     \
  k00, k01, k02, k03, k04,     k54, k53, k52, k51, k50, \
  k10, k11, k12, k13, k14,     k64, k63, k62, k61, k60, \
  k20, k21, k22, k23, k24,     k74, k73, k72, k71, k70, \
  k30, k31, k32, k33, k34,     k84, k83, k82, k81, k80, \
  k40, k41, k42, k43, k44,     k94, k93, k92, k91, k90 \
)                                                                 \
{                                                                 \
  {   k00,   k01,   k02,   k03,   k04 },                   \
  {   k10,   k11,   k12,   k13,   k14 },                   \
  {   k20,   k21,   k22,   k23,   k24 },                   \
  {   k30,   k31,   k32,   k33,   k34 },                   \
  {   k40,   k41,   k42,   k43,   k44 },                   \
  {   k50,   k51,   k52,   k53,   k54 },                   \
  {   k60,   k61,   k62,   k63,   k64 },                   \
  {   k70,   k71,   k72,   k73,   k74 },                   \
  {   k80,   k81,   k82,   k83,   k84 },                   \
  {   k90,   k91,   k92,   k93,   k94 },                   \
}
// clang-format on
