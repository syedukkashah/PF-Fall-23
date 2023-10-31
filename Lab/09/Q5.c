#include <stdio.h>
//Programmer: Syed Ukkashah Ahmed Shah
//Desc: Finding product of  nubers without using * operator using recursion
//Date: 10/31/2023
int mul(int n, int x, int sum){ //function takes int 2 integers and the sum(always 0) as arguments
	if(x>0){
		return mul(n, x-1, sum+n);//function calls itself and x is decremented by 1 in the parameter (recursion)
	}
	else{
		return sum; // sum is returned when x=0
	}
} // function end
int main() { // main starts
int a,b;
printf("Enter 2 numbers to find their product: ");
scanf("%d %d", &a, &b);
printf("%d", mul(a,b,0)); //sum is printed
}
