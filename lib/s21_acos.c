#include "../s21_math.h"

long double s21_acos(double x) {
  long double acos = 0.;
  if (0. < x && x < 1.) {
    acos = s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (-1. < x && x < 0.) {
    acos = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  } else {
    return S21_NAN;
  }
  return acos;
}
