#include "test_main.h"

START_TEST(test_two_positive) {
  double x = 456.654321;
  double y = 321.123456;
  ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_two_negative) {
  double x = -123456.654321;
  double y = -654321.123456;
  ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_positive_negative) {
  double x = 123456.654321;
  double y = -654321.123456;
  ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_negative_positive) {
  double x = -123456.654321;
  double y = 654321.123456;
  ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_x_zero) {
  double x = 0;
  double y = 654321.123456;
  ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_y_zero) {
  double x = 123456.654321;
  double y = 0;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_x_nan) {
  double x = S21_NAN;
  double y = 654321.123456;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_y_nan) {
  double x = 123456.654321;
  double y = S21_NAN;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_x_inf) {
  double x = S21_P_INF;
  double y = 654321.123456;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_y_inf) {
  double x = 123456.654321;
  double y = S21_P_INF;
  ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_x_ninf) {
  double x = S21_N_INF;
  double y = 654321.123456;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_y_ninf) {
  double x = 123456.654321;
  double y = S21_N_INF;
  ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_x_inf_y_ninf) {
  double x = S21_P_INF;
  double y = S21_N_INF;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_x_ninf_y_inf) {
  double x = S21_N_INF;
  double y = S21_P_INF;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_x_ninf_y_ninf) {
  double x = S21_N_INF;
  double y = S21_N_INF;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_x_inf_y_inf) {
  double x = S21_P_INF;
  double y = S21_P_INF;
  ck_assert_ldouble_nan(fmod(x, y));
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

Suite *suite_s21_fmod() {
  Suite *suite = suite_create("s21_fmod");
  TCase *tcase = tcase_create("core");

  tcase_add_test(tcase, test_two_positive);
  tcase_add_test(tcase, test_two_negative);
  tcase_add_test(tcase, test_positive_negative);
  tcase_add_test(tcase, test_negative_positive);
  tcase_add_test(tcase, test_x_zero);
  tcase_add_test(tcase, test_y_zero);
  tcase_add_test(tcase, test_x_nan);
  tcase_add_test(tcase, test_y_nan);
  tcase_add_test(tcase, test_x_inf);
  tcase_add_test(tcase, test_y_inf);
  tcase_add_test(tcase, test_x_ninf);
  tcase_add_test(tcase, test_y_ninf);
  tcase_add_test(tcase, test_x_inf_y_ninf);
  tcase_add_test(tcase, test_x_ninf_y_inf);
  tcase_add_test(tcase, test_x_ninf_y_ninf);
  tcase_add_test(tcase, test_x_inf_y_inf);

  suite_add_tcase(suite, tcase);

  return suite;
}
