//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(sin_test) {
  ck_assert_float_eq(sin(-13.54), s21_sin(-13.54));
  ck_assert_float_eq(sin(13.54), s21_sin(13.54));
  ck_assert_float_eq(sin(0.0), s21_sin(0.0));
  ck_assert_float_eq(sin(1.0), s21_sin(1.0));
  ck_assert_float_eq(sin(2.5), s21_sin(2.5));
  ck_assert_float_eq(sin(6.28), s21_sin(6.28));
  ck_assert_float_eq(sin(2.2343), s21_sin(2.2343));
  ck_assert_float_eq(sin(0.1234), s21_sin(0.1234));
}
END_TEST

Suite *suite_s21_sin(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_math");
  tc13 = tcase_create("s21_test");
  tcase_add_test(tc13, sin_test);
  suite_add_tcase(s13, tc13);
  return s13;
}

