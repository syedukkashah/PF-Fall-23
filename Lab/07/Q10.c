#include <stdio.h>
int main(){
int s = 25;
int arr[]={1,2,3,4,12,6,9};
int i, j, sum, start;
for(i=0; i<7; i++){
    sum=0;
	for(j=i; j<7; j++){
	    sum+=arr[j];
		if(sum == s){
			printf("The Elements from Index %d to %d when summed result in %d", i, j, s);
		}
	}
}
}
