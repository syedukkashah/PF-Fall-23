//Programmer: Syed Ukkashah Ahmed Shah
//Desc: Swapping variables using pointers
//Date: 10/31/2023
#include <stdio.h>
void swap(int *a, int *b){ //swap function takes addresses of 2 integers
	int temp = *a; //a temp int variable is initialized to value of a
	*a=*b;
	*b=temp; //a and b are swapped using pointers
}
int main() {
	int i=1, j=2;
	printf("i = %d, j = %d", i, j);
	swap(&i, &j); 
	printf("\n(Swapped values) i = %d, j = %d", i, j);
	return 0;
}
