#include "test_main.h"

int main(void) {
  Suite *test_suites[] = {suite_s21_abs(),  suite_s21_acos(),  suite_s21_exp(),
                          suite_s21_fabs(), suite_s21_fmod(),  suite_s21_sqrt(),
                          suite_s21_ceil(), suite_s21_floor(), suite_s21_log(),
                          suite_s21_pow(),  suite_s21_atan(),  suite_s21_asin(),
                          suite_s21_sin(),  suite_s21_tan(),   suite_s21_cos()};

  SRunner *suite_runner = srunner_create(test_suites[0]);
  srunner_set_fork_status(suite_runner, CK_NOFORK);

  for (size_t i = 1; i < ARRAY_SIZE(test_suites); i++) {
    srunner_add_suite(suite_runner, test_suites[i]);
  }
  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  if (failed_count != 0) {
    // Сигнализируем о том, что тестирование прошло неудачно.
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
