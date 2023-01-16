//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(pow_test) {
  ck_assert_int_eq(pow(-1000.21313, 2.5), s21_pow(-1000.21313, 2.5));
  ck_assert_float_eq(pow(32346234.21313, 0), s21_pow(32346234.21313, 0));
  ck_assert_float_eq(pow(-S21_INF, -S21_INF), s21_pow(-S21_INF, -S21_INF));
  ck_assert_float_eq(pow(-1, S21_INF), s21_pow(-1, S21_INF));
  ck_assert_float_eq(pow(-1, -S21_INF), s21_pow(-1, -S21_INF));
  ck_assert_float_eq(pow(4, S21_INF), s21_pow(4, S21_INF));
  ck_assert_int_eq(pow(-5, 8), s21_pow(-5, 8));
  ck_assert_float_eq(pow(-5.25, 7), s21_pow(-5.25, 7));
  ck_assert_float_eq(pow(-0.5, -S21_INF), s21_pow(-0.5, -S21_INF));
  ck_assert_float_eq(pow(-0.5, S21_INF), s21_pow(-0.5, S21_INF));
}
END_TEST

Suite *suite_s21_pow(void) {
  Suite *s12;
  TCase *tc12;
  s12 = suite_create("s21_pow");
  tc12 = tcase_create("s21_test");
  tcase_add_test(tc12, pow_test);
  suite_add_tcase(s12, tc12);
  return s12;
}
