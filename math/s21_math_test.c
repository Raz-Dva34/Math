#include <check.h>
#include "s21_math.h"
#include <stdlib.h>
#include "cases.h"

START_TEST(acos_tests) {
    ck_assert_int_eq(acos(-13.54), s21_acos(-13.54));
    ck_assert_int_eq(acos(13.54), s21_acos(13.54));
    ck_assert_int_eq(acos(2.2343), s21_acos(2.2343));
    ck_assert_float_eq(acos(0.1234), s21_acos(0.1234));
    ck_assert_float_eq(acos(0), s21_acos(0));
    ck_assert_float_eq(acos(1), s21_acos(1));
    ck_assert_float_eq(acos(-1), s21_acos(-1));
    ck_assert_float_eq(acos(0.5), s21_acos(0.5));
    ck_assert_float_eq(acos(-0.5), s21_acos(-0.5));
}
END_TEST

    Suite *s21_math_tests_create() {
  Suite *s21_math = suite_create("s21_math");
  TCase *s21_math_tests = tcase_create("S21_MATH");
  tcase_add_test(s21_math_tests, acos_tests);
  suite_add_tcase(s21_math, s21_math_tests);
  return s21_math;
}

int main() {
  Suite *s21_math = s21_math_tests_create();
  SRunner *s21_math_runner = srunner_create(s21_math);
  int number_failed;
  srunner_run_all(s21_math_runner, CK_NORMAL);
  number_failed = srunner_ntests_failed(s21_math_runner);
  srunner_free(s21_math_runner);

  return number_failed == 0 ? 0 : 1;
}
//https://libcheck.github.io/check/doc/check_html/check_4.html
