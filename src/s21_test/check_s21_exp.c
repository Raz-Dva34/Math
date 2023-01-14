//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(exp_test) {
 // ck_assert_float_eq(exp(0), s21_exp(0));
//  ck_assert_float_eq(exp(13.54), s21_exp(13.54));
//  ck_assert_float_eq(exp(-0.54), s21_exp(-0.54));
//  ck_assert_float_eq(exp(1000), s21_exp(1000));
//  ck_assert_float_eq(exp(1), s21_exp(1));
//  ck_assert_float_eq(exp(2), s21_exp(2));
//  ck_assert_float_eq(exp(-1), s21_exp(-1));
//  ck_assert_float_eq(exp(0), s21_exp(0));
  //ck_assert_int_eq(exp(S21_NAN), s21_exp(S21_NAN));
//  ck_assert_float_eq(exp(710), s21_exp(710));
//  ck_assert_float_eq(exp(1.2345), s21_exp(1.2345));
//  ck_assert_float_eq(exp(1.23454656768), s21_exp(1.23454656768));
  ck_assert_float_eq(exp(-S21_INF), s21_exp(-S21_INF));
  //ck_assert_float_eq(exp(S21_MAX_LONG_DOUBLE), s21_exp(S21_MAX_LONG_DOUBLE));
}
END_TEST

Suite *suite_s21_exp(void) {
  Suite *s7;
  TCase *tc7;
  s7 = suite_create("s21_math");
  tc7 = tcase_create("s21_test");
  tcase_add_test(tc7, exp_test);
  suite_add_tcase(s7, tc7);
  return s7;
}