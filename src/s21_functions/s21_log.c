//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"

long double s21_log (double x) {
  long double log = 0.0;
  int count = 0;
  double res = 0;
  double comparison = 0;
  if (x == 0) {
    log = -S21_INF;
  } else if (x < 0) {
    log = S21_NAN;
  } else if (x == S21_INF) {
    log = S21_INF;
  } else {
  while (x >= S21_M_E) {
    x /= S21_M_E; 
    count++;
  }
  for (int i = 0; i < 100; i++) {
    comparison = res;
    res = comparison + 2 * (x - s21_exp(comparison)) / (x + s21_exp(comparison));
  }
  log = res + count;
  }
  return log;
}
