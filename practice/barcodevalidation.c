#include <stdio.h>
#include <stdbool.h>
int main(){
	int x, odd=0, even=0,total;
	long code, arr[12];
printf("Enter a 12 digit bar code: ");
scanf("%l", &code);
for(int i=0; i<12; i++){
	x=code%10;
	arr[i]=x;
	code/=10;
}
for(int i=11; i>=0; i--){
	if((i+1)%2==0){
		even+=arr[i];
	}
	else{
		odd+=arr[i];
	}
}
total = (odd*2)+even;
if(total%10 == 0 && arr[0]==0){
	printf("Check Digit = Last Digit\n");
	printf("This Barcode is Valid");
}
else{
	printf("This Barcode is Invalid");
}
}
