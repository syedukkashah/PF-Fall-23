#include <stdio.h>
#include <stdlib.h>
/*
Programmer: Syed Ukkashah
Date: 12th Sept 2023
Description: Sum of digits of a number
*/

int main() {
	int num,sum=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(num!=0){
		sum+= (num%10);
		num/=10;
	}
	printf("Sum is %d", sum);
	return 0;
}
