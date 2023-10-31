#include <stdio.h>
//Programmer: Syed Ukkashah Ahmed Shah
//Desc: Finding factorial using recursion
//Date: 10/31/2023
int factorial(int n){ //function takes int n as argument
	if(n>1){
		n*=factorial(n-1); //function calls itself and n is decremented by 1 in the parameter (recursion)
	}
	else{
		return n; // n is returned when n=1
	}
} // function end
int main() { // main starts
int n;
printf("Enter N to find it's factorial: ");
scanf("%d", &n);
printf("%d", factorial(n)); //n is printed
}
