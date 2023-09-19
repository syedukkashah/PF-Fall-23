#include <stdio.h>
#include <stdlib.h>
int main(){
	int time;
	printf("Enter time in 24-Hour format: ");
	scanf("%d", &time);
	if(time<0 || time > 24){
		printf("Invalid input");
	}
	if(time>=5 && time <=11){
		printf("Good Morning");
	}
	if(time>=12 && time <=18){
		printf("Good Evening");
	}
	if(time>18 && time <=24){
		printf("Good Night");
	}
	
}
