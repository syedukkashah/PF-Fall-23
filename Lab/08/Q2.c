#include <stdio.h>
void calculate (double first, double second, char choice){
	 switch (choice) {
    case '+':
      printf("%lf + %lf = %lf", first, second, first + second);
      break;
    case '-':
      printf("%lf - %lf = %lf", first, second, first - second);
      break;
    case '*':
      printf("%lf * %lf = %lf", first, second, first * second);
      break;
    case '/':
      printf("%lf / %lf = %lf", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }
}
int main() {

  char op;
  double a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);
  calculate(a,b,op);
  return 0;
}
