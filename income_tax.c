#include <stdio.h>

int main() {
  // Declaration
  double annual_income = 0.0;
  double tax = 0.0;

  double lower_tax_class = 0.365;
  double middle_tax_class = 0.432;
  double upper_tax_class = 0.5;

  double lower_tax_limit = 11000.00;
  double middle_tax_limit = 25000.00;
  double upper_tax_limit = 60000.00;

  // Input
  printf("What is your annual gross income: ");
  scanf("%lf", &annual_income);

  // Calculation
  if(annual_income > upper_tax_limit)
  {
    tax = (annual_income - upper_tax_limit) * upper_tax_class;
    annual_income = upper_tax_limit;
  }
  if(annual_income > middle_tax_limit)
  {
    tax += (annual_income - middle_tax_limit) * middle_tax_class;
    annual_income = middle_tax_limit;
  }
  if(annual_income > lower_tax_limit)
  {
    tax += (annual_income - lower_tax_limit) * lower_tax_class;
    annual_income = lower_tax_limit;
  }

  // Output
  printf("\nThe taxes you have to pay: %.2lf\n", tax);

  return 0;
}
