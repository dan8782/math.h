#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define S21_N_INF -1.0 / 0.0
#define S21_P_INF 1.0 / 0.0
#define S21_NAN __builtin_nan("")
#define is_inf __builtin_isinf
#define is_nan __builtin_isnan
#define is_fin(x) __builtin_isfinite(x)

#define S21_E 2.718281828459045
#define S21_PI 3.141592653589793
#define S21_EPS 1e-6l
#define S21_DBL_MAX 1.7976931348623158e+308

#include <float.h>

int s21_abs(int x);

long double s21_factorial(int N);
long double s21_fabs(double x);
long double s21_exp(double x);
long double s21_log(double x);
long double s21_fmod(double x, double y);
long double s21_sqrt(double x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_pow(double base, double exp);
long double s21_acos(double x);
long double s21_atan(double x);
long double s21_asin(double x);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H_
