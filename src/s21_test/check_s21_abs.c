//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"


START_TEST(abs_test) {
 // ck_assert_int_eq(abs(21), s21_abs(21));
  ck_assert_float_eq(abs(-13), s21_abs(-13));
  ck_assert_float_eq(abs(13), s21_abs(13));
 // ck_assert_float_eq(abs(-1000), s21_abs(-1000));
 // ck_assert_float_eq(abs(32346234), s21_abs(32346234));
 // ck_assert_float_eq(abs(0), s21_abs(0));
}
END_TEST

    Suite *suite_s21_abs(void) {
  Suite *s1;
  TCase *tc1;
  s1 = suite_create("s21_math");
  tc1 = tcase_create("s21_test");
  tcase_add_test(tc1, abs_test);
  suite_add_tcase(s1, tc1);
  return s1;
}
