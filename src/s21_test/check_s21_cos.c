//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(cos_test ) {
//  ck_assert_float_eq(cos(-13.54), s21_cos(-13.54));
  ck_assert_float_eq(cos(13.54), s21_cos(13.54));
//  ck_assert_float_eq(cos(0.0), s21_cos(0.0));
//  ck_assert_float_eq(cos(1.0), s21_cos(1.0));
//  ck_assert_float_eq(cos(3.14), s21_cos(3.14));
//  ck_assert_float_eq(cos(6.28), s21_cos(6.28));
//  ck_assert_float_eq(cos(2.2343), s21_cos(2.2343));
 // ck_assert_float_eq(cos(0.1234), s21_cos(0.1234));
}
END_TEST

Suite *suite_s21_cos(void) {
  Suite *s6;
  TCase *tc6;
  s6 = suite_create("s21_math");
  tc6 = tcase_create("s21_test");
  tcase_add_test(tc6, cos_test);
  suite_add_tcase(s6, tc6);
  return s6;
}
