//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"

long double s21_acos(double x) {
  double acos = 0.0;
  if ((x >= -1) && (x <= 1)) {
    acos = (S21_M_PI/2) - s21_asin(x);
  } else {
    acos = S21_NAN;
  }
  return acos;
}
