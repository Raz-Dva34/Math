//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "s21_math.h"

long double s21_sqrt (double x) {
  long double sqrt = 1;
  if (x == 0) {
    sqrt = 0;
  } else if (x < 0) {
    sqrt = S21_NAN;  
  } else {
  sqrt = s21_pow(x, 0.5);
  } 
  return sqrt;
}
