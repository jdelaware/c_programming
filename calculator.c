#include <stdio.h>

int main() {
  // Declaration
  double first_operand = 0.0;
  double second_operand = 0.0;
  char operator;
  double result = 0.0;

  // Input
  printf("Type in your computation: ");
  scanf("%lf", &first_operand);
  scanf("%c", &operator);
  scanf("%lf", &second_operand);

  // Calculation
  switch(operator)
  {
    case '+':  result = first_operand + second_operand;
               printf("\n%.2lf + %.2lf = %.2lf\n",first_operand, second_operand, result);
               break;
    case '-':  result = first_operand - second_operand;
               printf("\n%.2lf - %.2lf = %.2lf\n",first_operand, second_operand, result);
               break;
    case '*':  result = first_operand * second_operand;
               printf("\n%.2lf * %.2lf = %.2lf\n",first_operand, second_operand, result);
               break;
    case '/':  result = first_operand / second_operand;
               printf("\n%.2lf / %.2lf = %.2lf\n",first_operand, second_operand, result);
               break;
    default:   printf("Error. Invalid input.\n");
  }

  return 0;
}
