//
// Created by Killed Hizdahr on 04.01.2023.
//
#include <stdio.h>
#include "s21_math.h"
#include <math.h>



int main (void) {
  double x;
  scanf("%lf", &x);

  return 0;
}



/*
//ceil
double x;
scanf("%lf", &x);
int minx = x;
double sravnenie = x - minx;
if (sravnenie > 0.0)
minx += 1;
x = minx;
printf("%lf", x);
 */

/*
//floor
double x;
scanf("%lf", &x);
int minx = x;
double sravnenie = x - minx;
if (sravnenie > 0.0)
minx -= 1;
x = minx;
printf("%lf", x);
 */

/*
//asin
double x;
scanf("%lf", &x);
double asin = x;
double d = x;
int n = 1;
if (x > 1 || x < -1)
return 0.0;
if (x == 1) {
asin = (S21_M_PI/2);
} else if (x == -1) {
asin = (-S21_M_PI/2);
} else {
while (!(d >= -S21_EPS && d <= S21_EPS))  {
d = ((d) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
asin = asin + d;
n++;
}
}
printf("REZ: %.9lf\n", asin);
*/



/*
 //arcos
 double x;
  scanf("%lf", &x);
  double acos = 0;
  acos = (S21_M_PI/2) - s21_asin(x);
  printf("REZ:%lf\n", acos);
  return 0;
 */

/*
 //cos
 double x;
  scanf("%lf", &x);
  double cos = 1;
  double d = 1;
  int n = 1;
while (!( d >= -0.0000001 && d <= 0.0000001)) {
  d = (-d) * (x * x) / ((2 * n - 1) * (2 * n));
  cos = cos + d;
  n++;
}
printf("REZ: %.7lf", cos);


 */


/*
 // exp
   double x;
  scanf("%lf", &x);
  printf("Prim:%f", exp(x));
  long double res = 1;
  long double temp = 1;
  long double i = 1;
  int flag = 0;
  if (x < 0) {
    x *= -1;
    flag = 1;
  }
  while (s21_fabs(res) > S21_EPS) {
    res *= x / i;
    i += 1;
    temp += res;
    if (temp > S21_MAX_LONG_DOUBLE) {
      temp = S21_INF;
      break;
    }
  }
  if (flag == 1) {
    if (temp > S21_MAX_LONG_DOUBLE) {
      temp = 0;
    } else {
      temp = 1. / temp;
    }
  }
  if (temp > S21_MAX_LONG_DOUBLE) {
    printf("%f", S21_INF);
  }
  printf("REZ:%Lf", temp);
  return 0;
 */