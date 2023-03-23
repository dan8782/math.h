#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = S21_NAN;
  if (!is_nan(x) && !is_inf(x) && !is_inf(y) && !is_nan(y) && y != 0) {
    long long int mod = (long long int)x / y;
    result = (long double)x - mod * (long double)y;
  } else if (is_inf(y) && !is_inf(x)) {
    result = x;
  }
  return result;
}
