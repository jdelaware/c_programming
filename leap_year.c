#include <stdio.h>

int main() {
  unsigned int anno = 0;

  printf("Wanna know which year is a leap year? ");
  scanf("%i", &anno);

  (anno % 4 == 0 && anno % 100 !=0) || anno % 400 == 0 ? printf("\n%i is a leap year.\n", anno) : printf("\n%i is not a leap year.\n", anno);

  return 0;
}
