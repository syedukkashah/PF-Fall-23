#include <stdio.h>

int main() {
	//adding some comments here since this is a slightly more complicated program
	
    int num; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num < 0 && num > 255){
    	printf("Invalid input"); // max value, if all bits are ON is 255
	}
    if ((num / 8) % 2 == 1) { // since 4th position means 2^3, we will see divide num by 8
        printf("4th bit is ON. Turning it OFF\n");
        num -= 8; 
    }
    int temp = num;
    int bit7 = 0;
    int bitPosition = 0;
    while (temp != 0) {
        if (bitPosition == 6) {
            bit7 = temp % 2;
            break;
        }
        temp /= 2;
        bitPosition++;
    }
    if (bit7 == 1) {
        printf("7th bit is ON. Turning it OFF...\n");
        num -= 64;
    }
    printf("Modified number: %d\n", num);
    return 0;
}


