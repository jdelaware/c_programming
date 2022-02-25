#include <stdio.h>

int main() {
  double eur = 0.0;

  printf("How many Euros? ");
  scanf("%lf", &eur);

  printf("\n%lf GBP\n", eur * 0.84);
  printf("\n%lf USD\n", eur * 1.13);
  printf("\n%lf RUB\n", eur * 86.54);
  printf("\n%lf JPY\n", eur * 130.82);
  printf("\n\nAll exchange rates are from Feb 15 2021, 1 PM\n");

  return 0;
}
