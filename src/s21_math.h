//
// Created by Killed Hizdahr on 03.01.2023.
//
#include <stdio.h>
#ifndef S21_MATH_H
#define S21_MATH_H

#define S21_M_E 2.7182818284590452353602874 //Значение Е 25 после запятой
#define S21_M_PI 3.1415926535897932384 //Зничение Пи 19 после запятой
#define S21_EPS 1e-17 //Экспоненциальная запись, обозначающая число 1*(10^-9) - десять в минус девятой степени.
#define S21_EPS10 0.0000000001
#define S21_MAX_LONG_DOUBLE 1.79769313486231571e+308
#define S21_INF 1.0 / 0.0
#define S21_NAN 0.0 / 0.0

int s21_abs(int x); //Вычисляет абсолютное значение целого числа OK
long double s21_acos(double x); // Вычисляет арккосинус
long double s21_asin (double x); // Вычисляет арксинус
long double s21_atan (double x); // Вычисляет арктангенс
long double s21_ceil (double x); // Возвращает ближайшее целое число, не меньшее заданного значения OK
long double s21_cos (double x); // Вычисляет косинус
long double s21_exp(double x); // Возвращает значение е, возведённое в заданную степень
long double s21_fabs (double x); // Вычисляет абсолютное значение числа с плавающей точкой OK
long double s21_floor (double x); // Возвращает ближайшее целое число, не превышающее заданное значение OK
long double s21_fmod (double x, double y); // Остаток операции деления с плавающей точкой
long double s21_log (double x); // Вычисляет натуральный логарифм
long double s21_pow (double base, double exp); // Возводит число в заданную степень
long double s21_sin (double x); // Вычисляет синус
long double s21_sqrt (double x); // Вычисляет квадратной корень
long double s21_tan (double x); // Вычисляет тангенс

#endif // S21_MATH_H
