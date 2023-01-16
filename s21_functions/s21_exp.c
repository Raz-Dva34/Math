//
// Created by Killed Hizdahr on 03.01.2023.
////
#include "../s21_math.h"
// Возвращает значение е, возведённое в заданную степень
long double s21_exp(double x) {
  int racional = 0;
  long double res = 1;
  long double temp = 1;
  long double counter = 1;
  if (x < 0) {
    x *= -1;
    racional = 1;
  }
  while (s21_fabs(res) > S21_EPS) {
    res *= x / counter;
    counter += 1;
    temp += res;
    if (temp > S21_MAX_LONG_DOUBLE) {
      temp = S21_INF;
      break;
    }
  }
  if (racional == 1) {
    if (temp > S21_MAX_LONG_DOUBLE) {
      temp = 0;
    } else {
      temp = 1. / temp;
    }
  }
  if (temp > S21_MAX_LONG_DOUBLE) {
    return S21_INF;
  }
  return temp;
}
