#include <stdio.h>
int main(){
	int num;
	printf("Enter 8-bit number: ");
	scanf("%d", &num);
	if((num/10000)%10 == 1) && (num/1000000)%10 == 1)){
		num-= 1001000;
	}
	if((num/10000)%10 == 1){
		num-=10000;
		printf("%d", num);
	}
	if((num/1000000)%10 == 1){
		num-=1000000;
		printf("%d", num);
	}
	
}
