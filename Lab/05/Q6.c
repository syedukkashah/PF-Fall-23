#include <stdio.h>

int main() {
    int num; 
    printf("Enter an 8 digit binary number: ");
    scanf("%d", &num);
    if((num/1000)%10==1 && (num/1000000)%10 == 1){
    	printf("4th and 7th bits are ON. Turning them OFF...\n");
    	num -= 1001000;
	}
	printf("Modified number: %.8d", num);
    return 0;
}


