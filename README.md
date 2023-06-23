# Библиотека math.h

Это реализация некоторых функций из стандартной библиотеки языка C - math.h. Библиотека предоставляет основные математические операции, работающие с числами с плавающей запятой.

## Описание функций

Ниже приведены некоторые функции, реализованные в библиотеке math.h:

| Номер | Функция                  | Описание                                                                                   |
|-------|--------------------------|--------------------------------------------------------------------------------------------|
| 1     | s21_abs(int x)           | Вычисляет абсолютное значение целого числа                                                  |
| 2     | s21_acos(double x)       | Вычисляет арккосинус                                                                        |
| 3     | s21_asin(double x)       | Вычисляет арксинус                                                                          |
| 4     | s21_atan(double x)       | Вычисляет арктангенс                                                                        |
| 5     | s21_ceil(double x)       | Возвращает ближайшее целое число, не меньшее заданного значения                             |
| 6     | s21_cos(double x)        | Вычисляет косинус                                                                           |
| 7     | s21_exp(double x)        | Возвращает значение e, возведенное в заданную степень                                      |
| 8     | s21_fabs(double x)       | Вычисляет абсолютное значение числа с плавающей точкой                                      |
| 9     | s21_floor(double x)      | Возвращает ближайшее целое число, не превышающее заданное значение                           |
| 10    | s21_fmod(double x, double y) | Остаток операции деления с плавающей точкой                                                |
| 11    | s21_log(double x)        | Вычисляет натуральный логарифм                                                              |
| 12    | s21_pow(double base, double exp) | Возводит число в заданную степень                                                     |
| 13    | s21_sin(double x)        | Вычисляет синус                                                                             |
| 14    | s21_sqrt(double x)       | Вычисляет квадратный корень                                                                 |
| 15    | s21_tan(double x)        | Вычисляет тангенс                                                                           |

## Сборка и тестирование

- Для сборки библиотеки и тестов используйте Makefile со следующими целями:
  - `all`: собирает библиотеку и тесты.
  - `clean`: удаляет собранные файлы.
  - `test`: запускает unit-тесты.
  - `s21_math.a`: собирает статическую библиотеку.
  - `gcov_report`: формирует отчет gcov в виде HTML-страницы.