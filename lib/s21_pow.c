#include "../s21_math.h"

long double NO_RESULT = 2;
long double check_cases(double base, double exp);
long double s21_pow_int(double base, long long int exp_int);
long double s21_pow_double(double base, double exp);
long double s21_fabsl(long double x);
long long int s21_llabs(long long int x);

long double s21_pow(double base, double exp) {
  long double result;
  if ((result = check_cases(base, exp)) == NO_RESULT) {
    long int copy_exp = (long int)exp;
    if (s21_fabsl(exp) - s21_llabs(copy_exp) < S21_EPS) {
      result = s21_pow_int(base, copy_exp);
    } else {
      result = s21_pow_double(base, exp);
    }
  }
  return result;
}

long double check_cases(double base, double exp) {
  long double result = NO_RESULT;
  if (base == S21_N_INF || base == S21_P_INF) {
    if (exp == 0) {
      result = 1;
    } else if (exp < 0) {
      result = 0.0;
    } else {
      result = base;
    }
  } else if (exp == S21_N_INF || exp == S21_P_INF) {
    if (base == -1 || base == 1) {
      result = 1;
    } else if ((base == 0 && exp == S21_N_INF) ||
               (s21_fabs(base) < 1 && exp == S21_N_INF)) {
      result = exp;
    } else if (s21_fabs(base) < 1 && exp == S21_P_INF) {
      result = 0;
    } else if (exp == S21_N_INF) {
      result = 0;
    } else if (exp == S21_P_INF) {
      result = exp;
    }
  } else if (base == 0 && !is_nan(exp)) {
    if (exp == 0) {
      result = 1;
    } else if (exp > 0) {
      result = 0;
    } else {
      result = S21_P_INF;
    }
  } else if (base == 1) {
    result = 1;
  } else if (base == -1 && !is_nan(exp)) {
    result = (s21_fmod(exp, 2.0) == 0) ? 1 : -1;
  } else if (is_nan(base) || is_nan(exp)) {
    if (exp == 0) {
      result = 1;
    } else {
      result = S21_NAN;
    }
  }
  return result;
}

long double s21_pow_int(double base, long long int exp_int) {
  double res = 0.0;
  if (exp_int >= 0ll) {
    res = 1.0;
    while (exp_int > 0ll) {
      if ((exp_int % 2ll) != 0ll) {
        res *= base;
      }
      base *= base;
      exp_int = exp_int / 2ll;
    }
  } else {
    res = 1.0 / s21_pow_int(base, -exp_int);
  }
  return res;
}

long double s21_pow_double(double base, double exp) {
  double x = exp * s21_log(base);
  long double result = s21_exp(x);
  return (base < 0) ? S21_NAN : result;
}

long double s21_fabsl(long double x) { return (x > 0) ? x : -x; }

long long int s21_llabs(long long int x) { return (x > 0) ? x : -x; }
