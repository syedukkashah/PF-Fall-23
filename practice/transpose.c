#include <stdio.h>
void trans(int x, int y,int arr1[x][y]){
	int transpose [y][x];
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			transpose[i][j]=arr1[j][i];
		}
	}
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			printf("|%d| ", transpose[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int row1, col1, i,j;
	printf("Enter rows of Matrix 1: ");
	scanf("%d", &row1);
	printf("Enter columns of Matrix 1: ");
	scanf("%d", &col1);
	int arr1[row1][col1];
	for(int i=0; i<row1; i++){
		for(int j=0; j<col1; j++){
			printf("Enter Element at Row %d, Column %d", i+1, j+1);
			scanf("%d", &arr1[i][j]);
		}
	}
	trans(row1, col1, arr1);
	
}
