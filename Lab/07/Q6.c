/*
Programmer: Syed Ukkashah
Date: 14th Oct 2023
Description: Checking frequency of elements in an array
*/
#include <stdio.h>
int main(){
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int arr[100];
	int i,j;
	int num;
	for(i=0; i<n; i++){
		printf("Enter element at index %d: ", i);
		scanf("%d", &num);
		arr[i]=num;
	}
	int frequency[100];
	int cnt;
	for(i=0; i<n; i++){
		cnt=1;
		if(arr[i]!= -1){
		for(j = i+1; j<n; j++){
			if(arr[i]==arr[j]){
				cnt++;
				arr[j]= -1;
			}
		}
	}
	frequency[i]=cnt;
}
	for(i=0; i<n; i++){
		if(arr[i]!=-1){
			printf("Frequency of %d is %d\n", arr[i], frequency[i]);
		}
	}
}

