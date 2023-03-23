#include "test_main.h"

START_TEST(test_positive) {
  double x = 3.0;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_small_positive) {
  double x = 15e-15;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_less_one) {
  double x = 0.99;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_one) {
  double x = 1.0;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_one_one) {
  double x = 1.1;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_big_positive) {
  double x = 10000000000;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), S21_EPS);
}
END_TEST

// START_TEST(test_negative) {
//   double x = -3.0;
//   ck_assert_ldouble_nan(sqrt(x));
//   ck_assert_ldouble_nan(s21_sqrt(x));
// }
// END_TEST

// START_TEST(test_negative_one) {
//   double x = -1.0;
//   ck_assert_ldouble_nan(sqrt(x));
//   ck_assert_ldouble_nan(s21_sqrt(x));
// }
// END_TEST

// START_TEST(test_big_negative) {
//   double x = -10000000000.0;
//   ck_assert_ldouble_nan(sqrt(x));
//   ck_assert_ldouble_nan(s21_sqrt(x));
// }
// END_TEST

// START_TEST(test_small_negative) {
//   double x = -15e-15;
//   ck_assert_ldouble_nan(sqrt(x));
//   ck_assert_ldouble_nan(s21_sqrt(x));
// }
// END_TEST

START_TEST(test_zero) {
  double x = 0;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_nan) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(sqrt(x));
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_infinity) {
  double x = S21_P_INF;
  ck_assert_ldouble_infinite(sqrt(x));
  ck_assert_ldouble_infinite(s21_sqrt(x));
}
END_TEST

START_TEST(test_n_infinity) {
  double x = S21_N_INF;
  ck_assert_ldouble_nan(sqrt(x));
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

Suite *suite_s21_sqrt() {
  Suite *suite = suite_create("s21_sqrt");
  TCase *tcase = tcase_create("core");

  tcase_add_test(tcase, test_positive);
  tcase_add_test(tcase, test_small_positive);
  tcase_add_test(tcase, test_less_one);
  tcase_add_test(tcase, test_one);
  tcase_add_test(tcase, test_one_one);
  tcase_add_test(tcase, test_big_positive);
  //   tcase_add_test(tcase, test_negative);
  //   tcase_add_test(tcase, test_negative_one);
  //   tcase_add_test(tcase, test_big_negative);
  //   tcase_add_test(tcase, test_small_negative);
  tcase_add_test(tcase, test_zero);
  tcase_add_test(tcase, test_nan);
  tcase_add_test(tcase, test_infinity);
  tcase_add_test(tcase, test_n_infinity);

  suite_add_tcase(suite, tcase);

  return suite;
}
