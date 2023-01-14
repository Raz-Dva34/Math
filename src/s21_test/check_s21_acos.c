//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(acos_test) {
  //ck_assert_int_eq(acos(-13.54), s21_acos(-13.54));
  //ck_assert_int_eq(acos(13.54), s21_acos(13.54));
  //ck_assert_int_eq(acos(2.2343), s21_acos(2.2343));
  //ck_assert_float_eq(acos(0.1234), s21_acos(0.1234));
  //ck_assert_float_eq(acos(0), s21_acos(0));
  ck_assert_float_eq(acos(1), s21_acos(1));
  ck_assert_float_eq(acos(-1), s21_acos(-1));
  ck_assert_float_eq(acos(0.5), s21_acos(0.5));
  ck_assert_float_eq(acos(-0.5), s21_acos(-0.5));
}
END_TEST


Suite *suite_s21_acos(void) {
  Suite *s2;
  TCase *tc2;
  s2 = suite_create("s21_math");
  tc2 = tcase_create("s21_test");
  tcase_add_test(tc2, acos_test);
  suite_add_tcase(s2, tc2);
  return s2;
}