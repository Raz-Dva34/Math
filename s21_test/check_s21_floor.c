//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(floor_test) {
  ck_assert_double_eq(floor(1.5), s21_floor(1.5));
  ck_assert_float_eq(floor(13.21313), s21_floor(13.21313));
  ck_assert_float_eq(floor(-1000.21313), s21_floor(-1000.21313));
  ck_assert_float_eq(floor(-3.01), s21_floor(-3.01));
  ck_assert_float_eq(floor(-S21_INF), s21_floor(-S21_INF));
  ck_assert_float_eq(floor(S21_INF), s21_floor(S21_INF));
}
END_TEST

Suite *suite_s21_floor(void) {
  Suite *s9;
  TCase *tc9;
  s9 = suite_create("s21_floor");
  tc9 = tcase_create("s21_test");
  tcase_add_test(tc9, floor_test);
  suite_add_tcase(s9, tc9);
  return s9;
}
