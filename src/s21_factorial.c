//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "s21_math.h"

int s21_factorial(int x) {
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}
