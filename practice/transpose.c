#include <stdio.h>
void transpose(int x, int y, int arr[x][y]){
	int trans[y][x];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			trans[j][i]=arr[i][j];
		}
	}
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			printf("|%d| ", trans[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int row, col;
	printf("Enter rows of Matrix: ");
	scanf("%d", &row);
	printf("Enter columns of Matrix: ");
	scanf("%d", &col);
	int arr[row][col];
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
	printf("\nTranspose: \n");
	transpose(row, col, arr);
}

