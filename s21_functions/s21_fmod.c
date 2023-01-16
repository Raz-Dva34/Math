//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"

long double s21_fmod (double x, double y) {
    long double ost = 0.0;
    long double fx = s21_fabs(x); 
    if ((y == 0) || (x == S21_INF && y == S21_INF) || 
        (x == -S21_INF && y == -S21_INF) || (x == -S21_INF && y == S21_INF)) {
        ost = S21_NAN;
    } else if (fx == y) {
        ost = -0;
    } else if ((fx < y) || (x < 0 && y == -S21_INF)) {
        ost = x;
    } else {
        long long int mod = x / y;
        ost = (long double)x - mod * (long double)y;
    }
    return ost;
}
