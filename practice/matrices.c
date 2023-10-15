#include <stdio.h>
void addMatrix(int x, int y, int arr1[x][y], int arr2[x][y]){
	int add[x][y];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			add[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
    for(int i=0; i<x; i++){
    	for(int j=0; j<y; j++){
    		printf("|%d|", add[i][j]);
		}
		printf("\n");
	}
}
void mulMatrix(int x, int y,int a, int b,  int arr1[x][y], int arr2[a][b]){
	int mul[x][b];
	for(int i=0; i<x; i++){
		for(int j=0; j<b; j++){
			mul[i][j]=0;
		}
	}
	int sum,j;
	for(int i=0; i<x; i++){
		for(j=0; j<b; j++){
			sum=0;
			for(int k=0; k<y; k++ ){
				sum+=(arr1[i][k]*arr2[k][j]);
			}
			mul[i][j]=sum;
		}
	}
    for(int i=0; i<x; i++){
    	for(int j=0; j<b; j++){
    		printf("|%d|", mul[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int row1, col1,row2, col2;
    printf("Enter rows of Matrix 1: ");
    scanf("%d", &row1);
    printf("Enter columns of Matrix 1: ");
    scanf("%d", &col1);
    int arr1[row1][col1];
    printf("Enter rows of Matrix 2: ");
    scanf("%d", &row2);
    printf("Enter columns of Matrix 2: ");
    scanf("%d", &col2);
    int arr2[row2][col2];
    printf("\nEnter elements of Matrix 1: \n");
    for(int i=0; i<row1; i++){
    	for(int j=0; j<col1; j++){
    		printf("Enter element at row %d, column %d: ", i+1, j+1);
    		scanf("%d", &arr1[i][j]);
		}
	}
	printf("\nEnter elements of Matrix 2: \n");
    for(int i=0; i<row2; i++){
    	for(int j=0; j<col2; j++){
    		printf("Enter element at row %d, column %d: ", i+1, j+1);
    		scanf("%d", &arr2[i][j]);
		}
	}
    printf("\nMatrix 1: \n");
    for(int i=0; i<row1; i++){
    	for(int j=0; j<col1; j++){
    		printf("|%d| ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix 2: \n");
    for(int i=0; i<row2; i++){
    	for(int j=0; j<col2; j++){
    		printf("|%d| ", arr2[i][j]);
		}
		printf("\n");
	}
	if(row1!=row2 || col1 != col2){
		printf("Addtion of Matrices isn't possible due to unequal dimensions");
	}
	else{
	 printf("\nAddition of Matrices: \n");
    addMatrix(row1, col1, arr1, arr2);
}
if(col1!=row2){
	printf("Multiplication of Matrices isn't possible due to unequal dimensions");
}
else{
printf("\nProduct of Matrices: \n");
    mulMatrix(row1, col1, row2, col2, arr1, arr2);
}    	    
}
