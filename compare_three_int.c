#include <stdio.h>

int main() {
  int a = 0, b = 0, c = 0;

  printf("Type in three integer:\n");
  scanf("%i", &a);
  scanf("%i", &b);
  scanf("%i", &c);

  if(a == b || a == c || b == c)
  {
    printf("At least 2 integer are identical. The comparison will be aborted.\n");
  }
  else if(a > b && a > c)
  {
    printf("\n%i is the biggest integer.\n", a);
  }
  else if(b > a && b > c)
  {
    printf("\n%i is the biggest integer.\n", b);
  }
  else if(c > a && c > b)
  {
    printf("\n%i is the biggest integer.\n", c);
  }
  else
  {
    printf("Error.");
  }
}
