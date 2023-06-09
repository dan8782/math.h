#include "../s21_math.h"

long double s21_sin(double x) {
  long double sum_sin = 0;
  for (; x < -2 * S21_PI || 2 * S21_PI < x;) {
    if (x > 2 * S21_PI) {
      x -= 2 * S21_PI;
    } else {
      x += 2 * S21_PI;
    }
  }
  //   if (x < 0) {
  //     x = -x;
  //     sign = -1;
  //   }
  for (int i = 0; i < 100; i++) {
    sum_sin +=
        s21_pow(-1, i) * s21_pow(x, 2 * i + 1) / s21_factorial(2 * i + 1);
  }
  return sum_sin /* * sign */;
}
