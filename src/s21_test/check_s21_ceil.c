//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(ceil_test ) {
//  ck_assert_float_eq(ceil(-13.54), s21_ceil(-13.54));
  ck_assert_float_eq(ceil(13.54), s21_ceil(13.54));
//  ck_assert_float_eq(ceil(1000), s21_ceil(1000));
 // ck_assert_float_eq(ceil(102.0000002), s21_ceil(102.0000002));
}
END_TEST

Suite *suite_s21_ceil(void) {
  Suite *s5;
  TCase *tc5;
  s5 = suite_create("s21_math");
  tc5 = tcase_create("s21_test");
  tcase_add_test(tc5, ceil_test);
  suite_add_tcase(s5, tc5);
  return s5;
}
