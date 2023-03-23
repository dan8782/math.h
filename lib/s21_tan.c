#include "../s21_math.h"

long double s21_tan(double x) {
  const long int tan_s21pi = 16331239353195370L;
  int res = -1;
  if (x == S21_PI / 2) {
    return tan_s21pi;
  } else if (x == -S21_PI / 2) {
    return tan_s21pi * res;
  }
  if (x == 0) {
    return 0;
  }
  return s21_sin(x) / s21_cos(x);
}
