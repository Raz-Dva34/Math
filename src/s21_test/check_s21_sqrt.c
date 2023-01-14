//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(sqrt_test) {
  ck_assert_float_eq(sqrt(0.0), s21_sqrt(0.0));
  ck_assert_float_eq(sqrt(1.0), s21_sqrt(1.0));
  ck_assert_float_eq(sqrt(3.14), s21_sqrt(3.14));
  ck_assert_float_eq(sqrt(6.28), s21_sqrt(6.28));
  ck_assert_float_eq(sqrt(2.2343), s21_sqrt(2.2343));
  ck_assert_int_eq(sqrt(-123), s21_sqrt(-123));
}
END_TEST

Suite *suite_s21_sqrt(void) {
  Suite *s14;
  TCase *tc14;
  s14 = suite_create("s21_math");
  tc14 = tcase_create("s21_test");
  tcase_add_test(tc14, sqrt_test);
  suite_add_tcase(s14, tc14);
  return s14;
}
