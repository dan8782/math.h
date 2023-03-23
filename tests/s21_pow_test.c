#include "test_main.h"

// POSITIVE NUMBER TESTS

START_TEST(test_mid_base_positive) {
  double base = 3;
  double exp = 4;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_mid_base_positive_2) {
  double base = 123.456;
  double exp = 1.1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_small_base_positive) {
  double base = 3e-15;
  double exp = 3;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_small_base_positive_2) {
  double base = 2.123456e-7;
  double exp = 2.01;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_big_base_positive) {
  double base = 3e15;
  double exp = 3;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_small_base_exp_positive) {
  double base = 3e-15;
  double exp = 3e-15;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_big_base_exp_positive) {
  double base = 3e15;
  double exp = 3e15;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

// 0.5 BASE TESTS WITH POSTIVE EXP

START_TEST(test_base_half_zero_exp_positive) {
  double base = 0.5;
  double exp = 1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_half_zero_exp_mid_positive) {
  double base = 0.5;
  double exp = 10;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_half_zero_exp_hundred_positive) {
  double base = 0.5;
  double exp = 100;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_half_zero_exp_big_positive) {
  double base = 0.5;
  double exp = 2e15;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_half_zero_exp_half_zero) {
  double base = 0.5;
  double exp = 0.5;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

// 0.5 BASE TESTS WITH NEGATIVE EXP

START_TEST(test_base_half_zero_exp_negative) {
  double base = 0.5;
  double exp = -1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_half_zero_exp_mid_negative) {
  double base = 0.5;
  double exp = -10;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_half_zero_exp_hundred_negative) {
  double base = 0.5;
  double exp = -100;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_half_zero_exp_big_negative) {
  double base = 0.5;
  double exp = -2e15;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_half_zero_exp_minus_half_zero) {
  double base = 0.5;
  double exp = -0.5;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

// MINUS 0.5 BASE TESTS WITH POSTIVE EXP

START_TEST(test_base_minus_half_zero_exp_positive) {
  double base = -0.5;
  double exp = 1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_mid_positive) {
  double base = -0.5;
  double exp = 10;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_hundred_positive) {
  double base = -0.5;
  double exp = 100;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_big_positive) {
  double base = -0.5;
  double exp = 2e15;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_half_zero) {
  double base = -0.5;
  double exp = 0.5;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

// MINUS 0.5 BASE TESTS WITH NEGATIVE EXP

START_TEST(test_base_minus_half_zero_exp_negative) {
  double base = -0.5;
  double exp = -1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_mid_negative) {
  double base = -0.5;
  double exp = -10;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_hundred_negative) {
  double base = -0.5;
  double exp = -100;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_big_negative) {
  double base = -0.5;
  double exp = -2e15;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_minus_half_zero_exp_minus_half_zero) {
  double base = -0.5;
  double exp = -0.5;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

// NEGATIVE NUMBERS TESTS

START_TEST(test_mid_base_negative) {
  double base = -3;
  double exp = 4;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_small_base_negative) {
  double base = -3e-15;
  double exp = 3;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_big_base_negative) {
  double base = 3e15;
  double exp = -3;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_small_base_exp_negative) {
  double base = 3e-15;
  double exp = -3e-15;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_mid_exp_small_negative) {
  double base = -3;
  double exp = -0.0009;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_mid_positive_exp_small_negative) {
  double base = 4;
  double exp = -0.0009;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

// TEST PLUS ONE NUMBER

START_TEST(test_base_one) {
  double base = 1;
  double exp = 4;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_exp_one) {
  double base = 1;
  double exp = 1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_mid_base_exp_one) {
  double base = 3;
  double exp = 1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

// TEST MINUS ONE NUMBER

START_TEST(test_base_minus_one_mid_exp) {
  double base = -1;
  double exp = 4;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_exp_minus_one) {
  double base = -1;
  double exp = -1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_mid_base_exp_minus_one) {
  double base = 3;
  double exp = -1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

// ZERO NUMBER TESTS

START_TEST(test_mid_base_exp_zero) {
  double base = 3;
  double exp = 0;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_zero_exp_zero) {
  double base = 0;
  double exp = 0;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_zero_exp_mid) {
  double base = 0;
  double exp = 3;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_zero_exp_minus_one) {
  double base = 0;
  double exp = -3;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

// MINUS ZERO NUMBER TESTS

START_TEST(test_mid_base_exp_minus_zero) {
  double base = 3;
  double exp = -0;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_zero_exp_minus_zero) {
  double base = -0;
  double exp = -0;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_zero_exp_mid) {
  double base = -0;
  double exp = 3;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_zero_exp_minus_one) {
  double base = -0;
  double exp = -3;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

// S21_NAN TESTS

START_TEST(test_base_nan_exp_mid) {
  double base = S21_NAN;
  double exp = 3;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_nan_exp_minus_one) {
  double base = S21_NAN;
  double exp = -1;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_nan_exp_zero) {
  double base = S21_NAN;
  double exp = 0;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_zero_exp_nan) {
  double base = 0;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_nan_exp_one) {
  double base = S21_NAN;
  double exp = 1;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_nan_exp_nan) {
  double base = S21_NAN;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_mid_exp_nan) {
  double base = 3;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_one_exp_nan) {
  double base = 1;
  double exp = S21_NAN;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_one_exp_nan) {
  double base = -1;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

// POSITIVE INFINITY EXP TESTS

START_TEST(test_base_mid_exp_pinf) {
  double base = 3;
  double exp = S21_P_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_one_exp_pinf) {
  double base = 1.0;
  double exp = S21_P_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_one_exp_pinf) {
  double base = -1;
  double exp = S21_P_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_zero_exp_pinf) {
  double base = 0.0;
  double exp = S21_P_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_big_exp_pinf) {
  double base = 3e15;
  double exp = S21_P_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_small_exp_pinf) {
  double base = 3e-15;
  double exp = S21_P_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

// POSITIVE INFINITY BASE TESTS

START_TEST(test_base_pinf_exp_mid) {
  double base = S21_P_INF;
  double exp = 3;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_pinf_exp_one) {
  double base = S21_P_INF;
  double exp = 1;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_pinf_one_exp_minus_one) {
  double base = S21_P_INF;
  double exp = -1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_pinf_exp_zero) {
  double base = S21_P_INF;
  double exp = 0;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_pinf_exp_zero_half) {
  double base = S21_P_INF;
  double exp = 0.5;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_pinf_exp_big_pos) {
  double base = S21_P_INF;
  double exp = 3e15;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_pinf_exp_small_pos) {
  double base = S21_P_INF;
  double exp = 3e-15;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

// NEGATIVE INFINITY EXP TESTS

START_TEST(test_base_mid_exp_ninf) {
  double base = 3;
  double exp = S21_N_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_one_exp_ninf) {
  double base = 1;
  double exp = S21_N_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_minus_one_exp_ninf) {
  double base = -1;
  double exp = S21_N_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_zero_exp_ninf) {
  double base = 0;
  double exp = S21_N_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_zero_half_exp_ninf) {
  double base = 0.5;
  double exp = S21_N_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_big_exp_ninf) {
  double base = 3e15;
  double exp = S21_N_INF;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_small_exp_ninf) {
  double base = 3e-15;
  double exp = S21_N_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

// NEGATIVE INFINITY BASE TESTS

START_TEST(test_base_ninf_exp_mid) {
  double base = S21_N_INF;
  double exp = 3;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_ninf_exp_one) {
  double base = S21_N_INF;
  double exp = 1;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_ninf_exp_minus_one) {
  double base = S21_N_INF;
  double exp = -1;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_ninf_exp_zero) {
  double base = S21_N_INF;
  double exp = 0;
  ck_assert_ldouble_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_base_ninf_exp_big) {
  double base = S21_N_INF;
  double exp = 3e15;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_base_ninf_exp_small) {
  double base = S21_N_INF;
  double exp = 3e-15;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

Suite *suite_s21_pow() {
  Suite *suite = suite_create("s21_pow");
  TCase *tcase = tcase_create("core");

  // POSITIVE NUMBER TESTS
  tcase_add_test(tcase, test_mid_base_positive);
  tcase_add_test(tcase, test_mid_base_positive_2);
  tcase_add_test(tcase, test_small_base_positive);
  tcase_add_test(tcase, test_small_base_positive_2);
  tcase_add_test(tcase, test_big_base_positive);
  tcase_add_test(tcase, test_big_base_exp_positive);
  tcase_add_test(tcase, test_small_base_exp_positive);

  // 0.5 BASE TESTS WITH POSITIVE EXP
  tcase_add_test(tcase, test_base_half_zero_exp_positive);
  tcase_add_test(tcase, test_base_half_zero_exp_mid_positive);
  tcase_add_test(tcase, test_base_half_zero_exp_hundred_positive);
  tcase_add_test(tcase, test_base_half_zero_exp_big_positive);
  tcase_add_test(tcase, test_base_half_zero_exp_half_zero);

  // 0.5 BASE TESTS WITH NEGATIVE EXP
  tcase_add_test(tcase, test_base_half_zero_exp_negative);
  tcase_add_test(tcase, test_base_half_zero_exp_mid_negative);
  tcase_add_test(tcase, test_base_half_zero_exp_hundred_negative);
  tcase_add_test(tcase, test_base_half_zero_exp_big_negative);
  tcase_add_test(tcase, test_base_half_zero_exp_minus_half_zero);

  // MINUS 0.5 BASE TESTS WITH POSITIVE EXP
  tcase_add_test(tcase, test_base_minus_half_zero_exp_positive);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_mid_positive);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_hundred_positive);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_big_positive);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_half_zero);

  // MINUS 0.5 BASE TESTS WITH NEGATIVE EXP
  tcase_add_test(tcase, test_base_minus_half_zero_exp_negative);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_mid_negative);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_hundred_negative);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_big_negative);
  tcase_add_test(tcase, test_base_minus_half_zero_exp_minus_half_zero);

  // NEGATIVE NUMBERS TESTS
  tcase_add_test(tcase, test_mid_base_negative);
  tcase_add_test(tcase, test_small_base_negative);
  tcase_add_test(tcase, test_big_base_negative);
  tcase_add_test(tcase, test_small_base_exp_negative);
  tcase_add_test(tcase, test_base_mid_exp_small_negative);
  tcase_add_test(tcase, test_base_mid_positive_exp_small_negative);

  // TEST PLUS ONE NUMBER
  tcase_add_test(tcase, test_base_one);
  tcase_add_test(tcase, test_base_exp_one);
  tcase_add_test(tcase, test_mid_base_exp_one);

  // TEST MINUS ONE NUMBER
  tcase_add_test(tcase, test_base_minus_one_mid_exp);
  tcase_add_test(tcase, test_base_exp_minus_one);
  tcase_add_test(tcase, test_mid_base_exp_minus_one);

  // ZERO NUMBER TESTS
  tcase_add_test(tcase, test_mid_base_exp_zero);
  tcase_add_test(tcase, test_base_zero_exp_zero);
  tcase_add_test(tcase, test_base_zero_exp_mid);
  tcase_add_test(tcase, test_base_zero_exp_minus_one);

  // MINUS ZERO NUMBER TESTS
  tcase_add_test(tcase, test_mid_base_exp_minus_zero);
  tcase_add_test(tcase, test_base_minus_zero_exp_minus_zero);
  tcase_add_test(tcase, test_base_minus_zero_exp_mid);
  tcase_add_test(tcase, test_base_minus_zero_exp_minus_one);

  // S21_NAN TESTS
  tcase_add_test(tcase, test_base_nan_exp_mid);
  tcase_add_test(tcase, test_base_nan_exp_nan);
  tcase_add_test(tcase, test_base_mid_exp_nan);
  tcase_add_test(tcase, test_base_nan_exp_minus_one);
  tcase_add_test(tcase, test_base_nan_exp_zero);
  tcase_add_test(tcase, test_base_zero_exp_nan);
  tcase_add_test(tcase, test_base_nan_exp_one);
  tcase_add_test(tcase, test_base_one_exp_nan);
  tcase_add_test(tcase, test_base_minus_one_exp_nan);

  // POSITIVE INFINITY EXP TESTS
  tcase_add_test(tcase, test_base_mid_exp_pinf);
  tcase_add_test(tcase, test_base_one_exp_pinf);
  tcase_add_test(tcase, test_base_minus_one_exp_pinf);
  tcase_add_test(tcase, test_base_zero_exp_pinf);
  tcase_add_test(tcase, test_base_big_exp_pinf);
  tcase_add_test(tcase, test_base_small_exp_pinf);

  // POSITIVE INFINITY BASE TESTS
  tcase_add_test(tcase, test_base_pinf_exp_mid);
  tcase_add_test(tcase, test_base_pinf_exp_one);
  tcase_add_test(tcase, test_base_pinf_one_exp_minus_one);
  tcase_add_test(tcase, test_base_pinf_exp_zero);
  tcase_add_test(tcase, test_base_pinf_exp_zero_half);
  tcase_add_test(tcase, test_base_pinf_exp_big_pos);
  tcase_add_test(tcase, test_base_pinf_exp_small_pos);

  // NEGATIVE INFINITY EXP TESTS
  tcase_add_test(tcase, test_base_mid_exp_ninf);
  tcase_add_test(tcase, test_base_one_exp_ninf);
  tcase_add_test(tcase, test_base_minus_one_exp_ninf);
  tcase_add_test(tcase, test_base_zero_exp_ninf);
  tcase_add_test(tcase, test_base_zero_half_exp_ninf);
  tcase_add_test(tcase, test_base_big_exp_ninf);
  tcase_add_test(tcase, test_base_small_exp_ninf);

  // NEGATIVE INFINITY BASE TESTS
  tcase_add_test(tcase, test_base_ninf_exp_mid);
  tcase_add_test(tcase, test_base_ninf_exp_one);
  tcase_add_test(tcase, test_base_ninf_exp_minus_one);
  tcase_add_test(tcase, test_base_ninf_exp_zero);
  tcase_add_test(tcase, test_base_ninf_exp_big);
  tcase_add_test(tcase, test_base_ninf_exp_small);

  suite_add_tcase(suite, tcase);

  return suite;
}
