//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(atan_test) {
  //ck_assert_float_eq(atan(-13.54), s21_atan(-13.54));
  //ck_assert_float_eq(atan(13.54), s21_atan(13.54));
  ck_assert_float_eq(atan(3.14), s21_atan(3.14));
  //ck_assert_float_eq(atan(6.28), s21_atan(6.28));
  //ck_assert_float_eq(atan(2.234), s21_atan(2.234));
  //ck_assert_float_eq(atan(0.1234), s21_atan(0.1234));
  //ck_assert_float_eq(atan(0), s21_atan(0));
  //ck_assert_float_eq(atan(1), s21_atan(1));
  //ck_assert_float_eq(atan(-1), s21_atan(-1));
  //ck_assert_float_eq(atan(3.5), s21_atan(3.5));
  //ck_assert_float_eq(atan(-3.5), s21_atan(-3.5));
}
END_TEST

Suite *suite_s21_atan(void) {
  Suite *s4;
  TCase *tc4;
  s4 = suite_create("s21_math");
  tc4 = tcase_create("s21_test");
  tcase_add_test(tc4, atan_test);
  suite_add_tcase(s4, tc4);
  return s4;
}
