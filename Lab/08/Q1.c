#include <stdio.h>
#include <stdlib.h>

void swapInteger(int a, int b){
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
	swapInteger(x,y);
	return 0;
}
