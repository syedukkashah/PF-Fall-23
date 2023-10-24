/*
Name: Syed Ukkashah
Date: 10/24/23
Decription: C program with a user-defined function calculate to perform basic arithmetic
operations such as addition, subtraction, multiplication, and division. The
program should take two numbers and an operation choice as input, and then use
the function to perform the operation.

*/
#include <stdio.h>
void calculate (double first, double second, char choice){  //function takes 2 integers and a char choice as input, then uses switch cases to identify choice variable and perform appropriate artihmetic calculations on the two integers
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
