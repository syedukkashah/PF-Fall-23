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
	while(top<=bottom && left<=right){
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
	while(top<=bottom && left<=right){
	for(int j=left; j<=right; j++){
		arr[top][j] = cnt--;
	}
	top++;
	for(int j=top; j<=bottom; j++){
		arr[j][right] = cnt--;
	}
	right--;
	for(int j=right; j>=left; j--){
		arr[bottom][j]=cnt--;
	}
	bottom--;
	for(int j=bottom; j>=top; j--){
		arr[j][left]=cnt--;
	}
	left++;
}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("|%2d| ", arr[i][j]);
		}
		printf("\n");
	}
}
