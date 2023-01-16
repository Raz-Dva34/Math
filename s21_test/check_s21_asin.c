//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(asin_test ) {
    ck_assert_int_eq(asin(-13.54), s21_asin(-13.54));
    ck_assert_float_eq(asin(0.5), s21_asin(0.5));
    ck_assert_float_nan(s21_asin(1.5));
    ck_assert_float_nan(s21_asin(-1.1));
  ck_assert_double_nan(s21_asin(S21_NAN));
  ck_assert_double_nan(s21_asin(-S21_NAN));
  ck_assert_double_nan(s21_asin(S21_INF));
  ck_assert_double_nan(s21_asin(-S21_INF));
  ck_assert_double_nan(s21_asin(S21_M_PI));
  ck_assert_double_nan(s21_asin(-S21_M_PI));
  ck_assert_double_nan(s21_asin(S21_MAX_LONG_DOUBLE));
  ck_assert_double_nan(s21_asin(-S21_MAX_LONG_DOUBLE));
  ck_assert_double_nan(s21_asin(S21_M_E));
  ck_assert_double_nan(s21_asin(-S21_M_E));
}
END_TEST

Suite *suite_s21_asin(void) {
  Suite *s3;
  TCase *tc3;
  s3 = suite_create("s21_asin");
  tc3 = tcase_create("s21_test");
  tcase_add_test(tc3, asin_test);
  suite_add_tcase(s3, tc3);
  return s3;
}

