#ifndef SRC_TESTS_TEST_MAIN_H_
#define SRC_TESTS_TEST_MAIN_H_

#include <check.h>
#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_math.h"

#define ARRAY_SIZE(arr) (sizeof((arr)) / sizeof((arr)[0]))

Suite *suite_s21_abs(void);
Suite *suite_s21_acos(void);
Suite *suite_s21_exp(void);
Suite *suite_s21_fabs(void);
Suite *suite_s21_fmod(void);
Suite *suite_s21_sqrt(void);
Suite *suite_s21_ceil(void);
Suite *suite_s21_floor(void);
Suite *suite_s21_log(void);
Suite *suite_s21_pow(void);
Suite *suite_s21_atan(void);
Suite *suite_s21_asin(void);
Suite *suite_s21_sin(void);
Suite *suite_s21_tan(void);
Suite *suite_s21_cos(void);

#endif  //  SRC_TESTS_TEST_MAIN_H_
