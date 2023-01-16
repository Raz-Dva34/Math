//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(ceil_test ) {
  ck_assert_float_eq(ceil(13.54), s21_ceil(13.54));
  ck_assert_float_eq(ceil(S21_INF), s21_ceil(S21_INF));
  ck_assert_float_eq(ceil(-S21_INF), s21_ceil(-S21_INF));
  ck_assert_float_nan(s21_ceil(S21_NAN));
  ck_assert_float_nan(s21_ceil(-S21_NAN));
  ck_assert_double_nan(s21_ceil(S21_NAN));
  ck_assert_double_nan(s21_ceil(-S21_NAN));
}
END_TEST

Suite *suite_s21_ceil(void) {
  Suite *s5;
  TCase *tc5;
  s5 = suite_create("s21_ceil");
  tc5 = tcase_create("s21_test");
  tcase_add_test(tc5, ceil_test);
  suite_add_tcase(s5, tc5);
  return s5;
}
