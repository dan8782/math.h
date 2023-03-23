#include "../s21_math.h"

long double s21_log(double x) {
  long double y = 1;
  if (is_nan(x)) {
    y = x < 0 ? -S21_NAN : S21_NAN;
  } else if (is_inf(x)) {
    y = x < 0 ? -S21_NAN : S21_P_INF;
  } else if (x < 0) {
    y = S21_NAN;
  } else if (x == 0) {
    y = S21_P_INF;
  } else {
    long double p = 0;
    int invert = x < 1.0l;
    if (invert) x = 1.0l / x;
    while (x > S21_E) {
      x /= S21_E;
      p++;
    }
    for (int i = 0; i < 500; i++) {
      y = y + 2 * (x - s21_exp(y)) / (x + s21_exp(y));
    }
    y += p;
    if (invert) y = -y;
  }
  return y;
}
