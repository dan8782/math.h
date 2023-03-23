#include "test_main.h"

START_TEST(ceil_test_1) {
  ck_assert_ldouble_eq(s21_ceil(-15.01), ceil(-15.01));
}
END_TEST

START_TEST(ceil_test_2) { ck_assert_ldouble_eq(s21_ceil(15.06), ceil(15.01)); }
END_TEST

START_TEST(ceil_test_3) {
  ck_assert_ldouble_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(ceil_test_4) {
  ck_assert_ldouble_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(ceil_test_5) { ck_assert_ldouble_eq(s21_ceil(-0.12), ceil(-0.12)); }
END_TEST

START_TEST(ceil_test_6) {
  double num = NAN;
  long double orig_res = ceil(num), our_res = s21_ceil(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(ceil_test_7) {
  ck_assert_ldouble_infinite(s21_ceil(INFINITY));
  ck_assert_ldouble_infinite(ceil(INFINITY));
}
END_TEST

START_TEST(ceil_test_8) {
  ck_assert_ldouble_nan(s21_ceil(NAN));
  ck_assert_ldouble_nan(ceil(NAN));
}
END_TEST

START_TEST(ceil_test_9) { ck_assert_ldouble_eq(s21_ceil(0), ceil(0)); }
END_TEST

START_TEST(ceil_test_10) { ck_assert_ldouble_eq(s21_ceil(0.0), ceil(0.0)); }
END_TEST

START_TEST(ceil_test_11) { ck_assert_ldouble_eq(s21_ceil(21.21), ceil(21.21)); }
END_TEST

START_TEST(ceil_test_12) { ck_assert_ldouble_eq(s21_ceil(21.91), ceil(21.91)); }
END_TEST

START_TEST(ceil_test_13) {
  ck_assert_ldouble_eq(s21_ceil(-21.21), ceil(-21.21));
}
END_TEST

START_TEST(ceil_test_14) {
  ck_assert_ldouble_eq(s21_ceil(-21.91), ceil(-21.91));
}
END_TEST

START_TEST(ceil_test_15) {
  ck_assert_ldouble_eq(s21_ceil(DBL_MAX), ceil(DBL_MAX));
}
END_TEST

Suite *suite_s21_ceil(void) {
  Suite *s5;
  TCase *tc5;
  s5 = suite_create("s21_ceil");
  tc5 = tcase_create("case_ceil");

  tcase_add_test(tc5, ceil_test_1);
  tcase_add_test(tc5, ceil_test_2);
  tcase_add_test(tc5, ceil_test_3);
  tcase_add_test(tc5, ceil_test_4);
  tcase_add_test(tc5, ceil_test_5);
  tcase_add_test(tc5, ceil_test_6);
  tcase_add_test(tc5, ceil_test_7);
  tcase_add_test(tc5, ceil_test_8);
  tcase_add_test(tc5, ceil_test_9);
  tcase_add_test(tc5, ceil_test_10);
  tcase_add_test(tc5, ceil_test_11);
  tcase_add_test(tc5, ceil_test_12);
  tcase_add_test(tc5, ceil_test_13);
  tcase_add_test(tc5, ceil_test_14);
  tcase_add_test(tc5, ceil_test_15);

  suite_add_tcase(s5, tc5);
  return s5;
}
