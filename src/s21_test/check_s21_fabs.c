//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(fabs_test) {
  ck_assert_float_eq(fabs(-13.21313), s21_fabs(-13.21313));
  ck_assert_float_eq(fabs(13.21313), s21_fabs(13.21313));
  ck_assert_float_eq(fabs(-1000.21313), s21_fabs(-1000.21313));
  ck_assert_float_eq(fabs(32346234.21313), s21_fabs(32346234.21313));
  ck_assert_float_eq(fabs(0.0), s21_fabs(0.0));
}
END_TEST

Suite *suite_s21_fabs(void) {
  Suite *s8;
  TCase *tc8;
  s8 = suite_create("s21_math");
  tc8 = tcase_create("s21_test");
  tcase_add_test(tc8, fabs_test);
  suite_add_tcase(s8, tc8);
  return s8;
}
