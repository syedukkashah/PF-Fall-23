#include <stdio.h>
int main() {
    int num; 
    printf("Enter 8 bit binary number: ");
    scanf("%d", &num);
    if((num/1000)%10 == 1 && (num/1000000)%10 ==1 ){
    	printf("bit 4 and bit 7 are ON\n");
    	num = num - 1001000;
    	printf("%d",num);
	}
	else{
		printf("bit 4 and bit 7 are OFF");
	}
}


