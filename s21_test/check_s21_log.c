//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(log_test) {
  ck_assert_int_eq(log(-13.54), s21_log(-13.54));
  ck_assert_float_eq(log(0.0), s21_log(0.0));
  ck_assert_float_eq(log(6.28), s21_log(6.28));
  ck_assert_float_eq(log(S21_INF), s21_log(S21_INF));
  ck_assert_float_eq(log(0.1234), s21_log(0.1234));
}
END_TEST

Suite *suite_s21_log(void) {
  Suite *s11;
  TCase *tc11;
  s11 = suite_create("s21_log");
  tc11 = tcase_create("s21_test");
  tcase_add_test(tc11, log_test);
  suite_add_tcase(s11, tc11);
  return s11;
}
