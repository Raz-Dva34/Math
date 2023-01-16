//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"

long double s21_ceil(double x) {
  if (x == S21_INF) {
    x = S21_INF;
  } else if (x != x) {
    x = S21_NAN; 
  } else if (x == -S21_INF) {
    x = -S21_INF; 
  } else {
  int minx = x;
  double sravnenie = x - minx;
  if (sravnenie > 0.0)
    minx += 1;
  x = minx;
  }
  return x; 
}