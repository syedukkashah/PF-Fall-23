#include <stdio.h>
#include <stdlib.h>
/*
Name: Syed Ukkashah
Date: 10/24/23
Decription: a C program that swaps the values of two integers using a user-defined
function, swapIntegers. The user inputs two integer values, and the program
uses the function to swap them. It should perform the swap, and display the
updated values.
*/
void swapIntegers(int a, int b){  //function swaps integers by using a variable that stores a value temporarily, arguments of function include 2 integers
	int temp = a;
	a=b;
	b=temp;
	printf("Value of a is %d\n", a);
	printf("Value of b is %d\n", b);
}

int main() {
	int x,y;
	printf("Enter a number a: ");
	scanf("%d", &x);
	printf("Enter a number b: ");
	scanf("%d", &y);
	swapIntegers(x,y);
	return 0;
}
