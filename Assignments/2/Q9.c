//Programmer: Syed Ukkashah
//Description: Using 2d arrays to handle indexes and traversing mazes from inside to outside and vice versa
//Date: 28th October 2023
#include<stdio.h>
#include<math.h>	
#include <stdlib.h>
int main(){
	int n, cnt=1;
	printf("Enter N: ");
	scanf("%d", &n);
	int arr[n][n];
	int top=0, bottom = n-1, left=0, right = n-1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i][j]=0;
		}
	}
	while(top<=bottom && left<=right){ //this condition checks if spiraling is possible
	for(int j=left; j<=right; j++){
		arr[top][j] = cnt++;
	}
	top++;
	for(int j=top; j<=bottom; j++){
		arr[j][right] = cnt++;
	}
	right--;
	for(int j=right; j>=left; j--){
		arr[bottom][j]=cnt++;
	}
	bottom--;
	for(int j=bottom; j>=top; j--){
		arr[j][left]=cnt++;
	}
	left++;
}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("|%2d| ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	top=0, bottom = n-1, left=0, right = n-1;
	cnt=n*n;
	while(top<=bottom && left<=right){ //possible spiraling check condition
	for(int j=right; j>=left; j--){
		arr[top][j] = cnt--;
	}
	top++; //Entire top row incremented
	for(int j=top; j<=bottom; j++){
		arr[j][left] = cnt--;
	}
	left++; //Entire left column incremented
	for(int j=left; j<=right; j++){
		arr[bottom][j]=cnt--;
	}
	bottom--; //Entire bottom row decremented
	for(int j=bottom; j>=top; j--){
		arr[j][right]=cnt--;
	}
	right--; //Entire right column decremented
}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("|%2d| ", arr[i][j]);
		}
		printf("\n");
	}
}
