//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"
// Возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor (double x) {
if (x == S21_INF) {
  x = S21_INF;
} else if (x == -S21_INF) {
  x = -S21_INF;
}  else if (x < 0) {
  x = (int)x - 1.0;
} else {
int minx = x;
double sravnenie = x - minx;
  if (sravnenie > 0.0) {
    x = minx;
  }
}    
return x;
}
