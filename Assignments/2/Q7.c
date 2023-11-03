//Programmer: Syed Ukkashah
//Description: Using 2d arrays for sorting, etc.
//Date: 28th October 2023
#include <stdio.h>
void sort(int arr [][2], int arr2[][2], int n){ // function takes both arrays and their size as arguments 
	int temp;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
		if(arr[j][0]>arr[j+1][0]){ // sorts arrays
			temp = arr[j][0];
			arr[j][0] = arr[j+1][0];
			arr[j+1][0]=temp;
		}
	}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
		if(arr2[j][0]<arr2[j+1][0]){
			temp = arr2[j][0];
			arr2[j][0] = arr2[j+1][0];
			arr2[j+1][0]=temp;
		}
	}
	}
}
void show(int arr [][2], int arr2[][2], int n){ // function prints arrays in relevant order
	printf("\nAscending order wrt to Age\n");
	for(int i=0; i<n; i++){
			printf("Shirt %d\n Age:%d --- Price: %d \n", i+1, arr[i][0], arr[i][1]);
	}
	printf("\nDescending order wrt to Prices\n");
	for(int i=0; i<n; i++){
			printf("Shirt %d\n Age:%d --- Price: %d \n", i+1, arr2[i][1], arr2[i][0]);
	}
	}

void main(){
	int n;
	printf("Enter number of shirts: ");
	scanf("%d", &n);
	int shirt_ages[n][2], shirt_prices[n][2];
	printf("Enter shirt details: \n"); // input prompts
	for(int i=0; i<n; i++){
		printf("Shirt %d\n", i+1);
			printf("Age: ");
			scanf("%d", &shirt_ages[i][0]);
			shirt_prices[i][1] = shirt_ages[i][0];
			printf("Price: ");
			scanf("%d", &shirt_prices[i][0]);
			shirt_ages[i][1] = shirt_prices[i][0];
	}
	sort(shirt_ages, shirt_prices, n); 
	show(shirt_ages, shirt_prices, n);
}
