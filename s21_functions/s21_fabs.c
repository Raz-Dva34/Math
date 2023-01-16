//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"
//Вычисляет абсолютное значение числа с плавающей точкой
long double s21_fabs (double x) {
if (x < 0) {
  x = -x;
}
  return x;
}
