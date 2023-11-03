//Programmer: Syed Ukkashah
//Description: Using 2d arrays to sort for max elements, etc.
//Date: 28th October 2023
#include <stdio.h>
int main() {
	int bat, inn; // declaration of variables
	printf("Enter number of batsmen: ");
	scanf("%d", &bat);
	printf("Enter number of innings: ");
	scanf("%d", &inn);
	int arr[bat][inn]; // declaration of array 
	printf("\n");
	for(int i=0; i<bat; i++){
		for(int j=0; j<inn; j++){
			printf("Enter the runs score by batsman %d in inning %d: ", i+1, j+1); //prompting inputs for runs by each batsman in ther innings
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0; i<bat; i++){
			int max = arr[i][0]; 
			int half =0, centuries=0;
			int sum=0;
		for(int j=0; j<inn; j++){
			if(arr[i][j]>max){
				max=arr[i][j]; //initializing max variable to largest element in the array
			}
			if(arr[i][j]>=50 && arr[i][j]<=99){
				half++; //incrementing half variable if batsman scored a half century
			}
			if(arr[i][j]>=100){
				centuries++; //incrementing centuries variable if batsman scored a century
			}
			sum+=arr[i][j]; //calculating total runs by a batsman
		}
		    printf("\n\nBatsman %d stats: \n", i+1);
			printf("\nTotal runs scored: %d", sum);
	        printf("\nAverage runs scored: %.2f", (float)sum/inn); // typecasting sum to float to get floating point values in average (corrected to 2 decimal points)
	        printf("\nHighest score in an inning: %d", max);
	        printf("\nTotal half centuries: %d", half);
            printf("\nTotal centuries: %d", centuries);
	}

	return 0;
}
