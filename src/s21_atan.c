//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "s21_math.h"

long double s21_atan(double x) {
  double result;
  result = 1 / s21_tan(x);
  return result;
}
