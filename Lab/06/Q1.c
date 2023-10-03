#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n, i;
	int sum=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=2; i<n; i++){
		if(n%i == 0){
			sum+=i;
		}
	}
	if(sum == n){
		printf("%d is a perfect number", n);
	}
	else{
		printf("%d is not a perfect number", n);
	}
	return 0;
}
