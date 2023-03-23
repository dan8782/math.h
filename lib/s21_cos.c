#include "../s21_math.h"

long double s21_cos(double x) {
  long double result = 0.0;

  if (is_nan(x) == 1 || is_inf(x) == 1) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 1.0;
  } else {
    while (x < -2 * S21_PI || x > 2 * S21_PI) {
      if (x > 2 * S21_PI) {
        x -= 2 * S21_PI;
      } else {
        x += 2 * S21_PI;
      }
    }
    if (x < 0) x = -x;

    for (int i = 0; i < 100; i++) {
      result += s21_pow(-1.0, i) * s21_pow(x, 2.0 * i) / s21_factorial(2.0 * i);
    }
  }
  return result;
}
