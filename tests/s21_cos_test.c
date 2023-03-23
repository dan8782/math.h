#include "test_main.h"

START_TEST(test_zero) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_zero_one) {
  double x = 0.1;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_one) {
  double x = 1.0;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_minus_zero_one) {
  double x = -0.1;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_negative) {
  double x = -1.0;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_nan) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(cos(x));
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_p_inf) {
  double x = S21_P_INF;
  ck_assert_ldouble_nan(cos(x));
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_n_inf) {
  double x = S21_N_INF;
  ck_assert_ldouble_nan(cos(x));
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_less_n_2pi) {
  double x = -2 * S21_PI - 1;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_more_2pi) {
  double x = 2 * S21_PI + 1;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_pi) {
  double x = S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_minus_pi) {
  double x = -S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_two_pi) {
  double x = 2 * S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_minus_two_pi) {
  double x = -2 * S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_three_pi) {
  double x = 3 * S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_minus_three_pi) {
  double x = -3 * S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_big_pi) {
  double x = 300 * S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

START_TEST(test_minus_big_pi) {
  double x = -300 * S21_PI;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), S21_EPS);
}
END_TEST

Suite *suite_s21_cos(void) {
  Suite *s = suite_create("s21_cos");
  TCase *tc = tcase_create("core");

  tcase_add_test(tc, test_zero);
  tcase_add_test(tc, test_zero_one);
  tcase_add_test(tc, test_one);
  tcase_add_test(tc, test_minus_zero_one);
  tcase_add_test(tc, test_negative);
  tcase_add_test(tc, test_nan);
  tcase_add_test(tc, test_p_inf);
  tcase_add_test(tc, test_n_inf);
  tcase_add_test(tc, test_less_n_2pi);
  tcase_add_test(tc, test_more_2pi);
  tcase_add_test(tc, test_pi);
  tcase_add_test(tc, test_minus_pi);
  tcase_add_test(tc, test_two_pi);
  tcase_add_test(tc, test_minus_two_pi);
  tcase_add_test(tc, test_three_pi);
  tcase_add_test(tc, test_minus_three_pi);
  tcase_add_test(tc, test_big_pi);
  tcase_add_test(tc, test_minus_big_pi);

  suite_add_tcase(s, tc);
  return s;
}
