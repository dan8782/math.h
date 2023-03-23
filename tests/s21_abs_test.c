#include "test_main.h"

START_TEST(test_1) { ck_assert_int_eq(abs(0), s21_abs(0)); }
END_TEST

START_TEST(test_2) { ck_assert_int_eq(abs(-400), s21_abs(-400)); }
END_TEST

START_TEST(test_3) { ck_assert_int_eq(abs(1234), s21_abs(1234)); }
END_TEST

Suite *suite_s21_abs(void) {
  Suite *suite = suite_create("s21_abs");
  TCase *tcase_core = tcase_create("core");

  tcase_add_test(tcase_core, test_1);
  tcase_add_test(tcase_core, test_2);
  tcase_add_test(tcase_core, test_3);

  suite_add_tcase(suite, tcase_core);
  return suite;
}
