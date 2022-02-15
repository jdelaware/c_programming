#include <stdio.h>

int main() {
  double a = 0.0, b = 0.0;

  printf("Input1: ");
  scanf("%lf", &a);
  printf("Input2: ");
  scanf("%lf", &b);

  printf("\n%lf + %lf = %lf\n", a, b, a + b);
  printf("\n%lf - %lf = %lf\n", a, b, a - b);
  printf("\n%lf * %lf = %lf\n", a, b, a * b);
  printf("\n%lf / %lf = %lf\n", a, b, a / b);

  return 0;
}
