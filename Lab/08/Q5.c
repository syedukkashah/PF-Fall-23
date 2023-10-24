#include <stdio.h>
#include <string.h>
/*
Name: Syed Ukkashah
Date: 10/24/23
Decription: C program that checks if car should be used on a certain day
*/
int decideCarUsage(int day, int car){ //returnable function that takes day and car number as arguments
	if((day%2==0 && car%2==0) || (day%2!=0 && car%2!=0)){
		return 1;
	}
	else{
		return 0;
	}
}
int main() {
    int num,day;
    printf("Enter number of car: ");
    scanf("%d", &num);
    printf("Enter day of the week: ");
    scanf("%d", &day);
    if(day>=1 && day<=7){
    	printf("%d", decideCarUsage(day, num));
	}
	else{
		printf("Invalid input");
	}
    return 0;
}
