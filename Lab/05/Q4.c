#include <stdio.h>
int main(){
	char op;
	float num1,num2;
	printf("Enter number 1: ");
	scanf("%f",&num1);
	printf("Enter number 2: ");
	scanf("%f",&num2);
	printf("num1/num2 if '/' is chosen and num1 - num2 is '-' is chosen\n");
	printf("Choose operation (*, /, +, -): ");
	scanf(" %c", &op);
	switch (op){
		case '+':
			printf("&f", num1 + num2);
			break;
		case '-':
			printf("%f", num1 - num2);
			break;
		case '*':
			printf("%f", num1 * num2);
			break;
		case '/':
			printf("%f", num1 / num2);
			break;
		default: 
		printf("Choose the right option");
	}
}
