#include <stdio.h>
#include <stdbool.h>

int check(int x, int y, int arr[x][y]){
	int flag=1;
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			if(arr[i][j]!=arr[j][i]){
				flag=0;
			}
		}
	}
	return flag;
}
int main(){
	int row, col, row2, col2;
	printf("Enter rows of Matrix 1: ");
	scanf("%d", &row);
	printf("Enter columns of Matrix 1: ");
	scanf("%d", &col);	
	int arr[row][col];
	printf("\nMatrix 1: \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("enter element at row %d, column %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("|%d| ", arr[i][j]);
		}
		printf("\n");
	}
	if(check(row, col, arr)){
		printf("matrix is symmetric");
	}
	else{
		printf("matrix is not symmetric");
	}
}
