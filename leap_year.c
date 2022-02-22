#include <stdio.h>

int main() {
  int anno = 0;

  printf("Wanna know which year is a leap year? ");
  scanf("%i\n", &anno);

  anno % 4 == 0 && anno % 100 !=0 ? printf("\n%i is a leap year.\n", anno) : printf("\n%i is not a leap year.\n", anno);

  return 0;
}
