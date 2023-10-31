#include <stdio.h>
//Programmer: Syed Ukkashah Ahmed Shah
//Desc: Reversing array using pointers
//Date: 10/31/2023
void reverse(int size, int *arr){ //reverse function takes size of arrray and address of array as arguments
	int i;
	for( i=0; i<size/2; i++){ //for loop start
	    int temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp; //using temp variable to reverse arra elements
	} // for loop end
} // function end
int main() { // main starts
	int arr[10];
	int i;
	for( i=0; i<10; i++){ 
		printf("Enter value at index %d: ", i);
		scanf("%d", &arr[i]);
	}
	reverse(10, &arr); //function called
	printf("\nSwapped Values: \n");
	for(i=0; i<10; i++){
		printf("value at index %d: %d\n", i, arr[i]);
	}
	return 0;
}
