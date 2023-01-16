//
// Created by Killed Hizdahr on 15.01.2023.
//
#include "../../../Downloads/C4_s21_math-0-structed-src 3/src/s21_math.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int x;
  double z;
  double y;
  scanf("%d", &x);
  scanf("%lf", &z);
  scanf("%lf", &y);
  printf("ABS:%d NASH:%d\n", abs(x), s21_abs(x));
  printf("ACOS:%f NASH:%Lf\n", acos(z), s21_acos(z));
  printf("ASIN:%f NASH:%Lf\n", asin(z), s21_asin(z));
  printf("ATAN:%f NASH:%Lf\n", atan(z), s21_atan(z));
  printf("CEIL%ff NASH:%Lf\n", ceil(z), s21_ceil(z));
  printf("COS:%f NASH:%Lf\n", cos(z), s21_cos(z));
  printf("EXP:%f NASH:%Lf\n", exp(z), s21_exp(z));
  printf("FABS:%f NASH:%Lf\n", fabs(z), s21_fabs(z));
  printf("FLOOR:%f NASH:%Lf\n", floor(z), s21_floor(z));
  printf("FMOD:%f NASH:%Lf\n", fmod(z, y), s21_fmod(z, y));
  printf("LOG:%f NASH:%Lf\n", log(z), s21_log(z));
  printf("POW:%f NASH:%Lf\n", pow(z, y), s21_pow(z, y));
  printf("SIN:%f NASH:%Lf\n", sin(z), s21_sin(z));
  printf("SQRT:%f NASH:%Lf\n", sqrt(z), s21_sqrt(z));
  printf("TAN:%f NASH:%Lf\n", tan(z), s21_tan(z));





  return 0;
}
