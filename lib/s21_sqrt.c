#include "../s21_math.h"

long double s21_sqrt(double x) {
  long double result = S21_NAN;
  if (!is_nan(x) && x > 0) {
    long double left = 0;
    long double right = x > 1 ? x : 1;
    long double mid = (left + right) / 2;
    while ((mid - left) > S21_EPS) {
      if (mid * mid > x) {
        right = mid;
      } else {
        left = mid;
      }
      mid = (left + right) / 2;
    }
    result = mid;
  } else if (x == 0) {
    result = 0;
  }
  return result;
}
