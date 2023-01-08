//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "s21_math.h"

long double s21_cos (double x) {
  double cos = 1;
  double d = 1;
  int n = 1;
  while (!( d >= -0.0000001 && d <= 0.0000001)) {
    d = (-d) * (x * x) / ((2 * n - 1) * (2 * n));
    cos = cos + d;
    n++;
  }
  return cos;
}
