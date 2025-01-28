#include <stdio.h>

int main() {

  char operator;
  double first, second;
  printf("Enter first operand: ");
  scanf("%lf", &first);
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);
  printf("Enter second operand: ");
  scanf("%lf", &second);

  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
