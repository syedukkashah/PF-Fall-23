#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	if(num == 0){
		printf("This number is 0");
	}
	if(num%3 == 0 && num!=0){
		printf("\nThis number is a multiple of 3");
	}
	else{
		printf("\nThis number is not a multiple of 3");
	}
}
