//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(tan_test) {
  ck_assert_float_eq(tan(-13.54), s21_tan(-13.54));
  ck_assert_float_eq(tan(13.54), s21_tan(13.54));
  ck_assert_float_eq(tan(0), s21_tan(0));
  ck_assert_float_eq(tan(1), s21_tan(1));
  ck_assert_float_eq(tan(2.5), s21_tan(2.5));
  ck_assert_float_eq(tan(6.28), s21_tan(6.28));
  ck_assert_float_eq(tan(2.2343), s21_tan(2.2343));
  ck_assert_float_eq(tan(0.1234), s21_tan(0.1234));
}
END_TEST

Suite *suite_s21_tan(void) {
  Suite *s15;
  TCase *tc15;
  s15 = suite_create("s21_math");
  tc15 = tcase_create("s21_test");
  tcase_add_test(tc15, tan_test);
  suite_add_tcase(s15, tc15);
  return s15;
}

