//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "s21_math.h"

long double s21_fmod (double x, double y) {
    long double ost = 0.0;
    long double fx = s21_fabs(x); 
    if (y == 0) {
        ost = S21_NAN;
    } else if (fx == y) {
        ost = 0;
    } else if (fx < y) {
        ost = x;
    } else {
        long long int mod = x / y;
        ost = (long double)x - mod * (long double)y;
    }
    return (int)ost;
}
