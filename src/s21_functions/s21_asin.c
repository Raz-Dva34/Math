//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"
// Вычисляет арксинус
long double s21_asin(double x) {
  double asin = x;
  if ((x >= (-S21_M_PI/2)) && (x <= (S21_M_PI/2))) {
    double d = x;
    int n = 1;
    if (x > 1 || x < -1) {
      asin = S21_NAN;
    } else if (x == 1) {
      asin = (S21_M_PI/2);
    } else if (x == -1) {
      asin = (-S21_M_PI/2);
    } else {
      while (!(d >= -S21_EPS && d <= S21_EPS)) {
        d = ((d) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
        asin = asin + d;
        n++;
      }
    }
  } else {
    asin = S21_NAN;
  }
  return asin;
}
