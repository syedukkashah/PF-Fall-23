#include <stdio.h>
int main() {
	int bat, inn;
	printf("Enter number of batsmen: ");
	scanf("%d", &bat);
	printf("Enter number of innings: ");
	scanf("%d", &inn);
	int arr[bat][inn];
	printf("\n");
	for(int i=0; i<bat; i++){
		for(int j=0; j<inn; j++){
			printf("Enter the runs score by batsman %d in inning %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0; i<bat; i++){
			int max = arr[i][0];
			int half =0, centuries=0;
			int sum=0;
		for(int j=0; j<inn; j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
			if(arr[i][j]>=50 && arr[i][j]<=99){
				half++;
			}
			if(arr[i][j]>=100){
				centuries++;
			}
			sum+=arr[i][j];
		}
		    printf("\n\nBatsman %d stats: \n", i+1);
			printf("\nTotal runs scored: %d", sum);
	        printf("\nAverage runs scored: %.2f", (float)sum/inn);
	        printf("\nHighest score in an inning: %d", max);
	        printf("\nTotal half centuries: %d", half);
            printf("\nTotal centuries: %d", centuries);
	}

	return 0;
}
