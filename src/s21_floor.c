//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "s21_math.h"
// Возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor (double x) {
  int minx = x;
  double sravnenie = x - minx;
  if (sravnenie > 0)
    minx -= 1;
  x = minx;
  return x;
}
