//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(fmod_test) {
  ck_assert_float_eq(fmod(-13.21313, 2.5), s21_fmod(-13.21313, 2.5));
  ck_assert_float_eq(fmod(13.21313, 2.5), s21_fmod(13.21313, 2.5));
  ck_assert_float_eq(fmod(-1000.21313, 2.5), s21_fmod(-1000.21313, 2.5));
  ck_assert_float_eq(fmod(32346234.21313, 2.5), s21_fmod(32346234.21313, 2.5));
  ck_assert_float_eq(fmod(0, 2.5), s21_fmod(0, 2.5));
  ck_assert_float_eq(fmod(2.5, 2.5), s21_fmod(2.5, 2.5));
}
END_TEST

Suite *suite_s21_fmod(void) {
  Suite *s10;
  TCase *tc10;
  s10 = suite_create("s21_math");
  tc10 = tcase_create("s21_test");
  tcase_add_test(tc10, fmod_test);
  suite_add_tcase(s10, tc10);
  return s10;
}