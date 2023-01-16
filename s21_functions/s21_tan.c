//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"

long double s21_tan(double x) {
  double result;
  result = s21_sin(x) / s21_cos(x);
  return result;
}
