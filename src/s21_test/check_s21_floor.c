//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(floor_test) {
  ck_assert_float_eq(fabs(-13.21313), s21_fabs(-13.21313));
  ck_assert_float_eq(fabs(13.21313), s21_fabs(13.21313));
  ck_assert_float_eq(fabs(-1000.21313), s21_fabs(-1000.21313));
  ck_assert_float_eq(fabs(32346234.21313), s21_fabs(32346234.21313));
  ck_assert_float_eq(fabs(0.0), s21_fabs(0.0));
}
END_TEST

Suite *suite_s21_floor(void) {
  Suite *s9;
  TCase *tc9;
  s9 = suite_create("s21_math");
  tc9 = tcase_create("s21_test");
  tcase_add_test(tc9, floor_test);
  suite_add_tcase(s9, tc9);
  return s9;
}
