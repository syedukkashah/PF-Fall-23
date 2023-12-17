#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#define MAX_LINE 40000
#define FILENAME_SIZE 80000
char buffer[FILENAME_SIZE]; //global char arr declared for scanning file
void initialize_matrix(int rows, int cols, int matrix[rows][cols], FILE* f){ // Arguments: Matrix + dimensions + FILE ptr
	 int c; 
	 char* token; //token char ptr declared
    while ((c = fgetc(f)) != EOF && c != '\n'); //loop makes sure the file cursor ends up on the next line
    for(int i=0; i<rows; i++){
    	if(fgets(buffer, FILENAME_SIZE, f)!=NULL){
    		 token = strtok(buffer, " ");
    	for(int j=0; j<cols; j++){
    		matrix[i][j] = atoi(token);
    		token = strtok(NULL, " ");
    	}
    }
    else{
    	printf("Error reading matrix elements\n");
    }
}
}
int main() {
    FILE* f = fopen("input.txt", "r");
    int r1, c1;
    fscanf(f,"%d, %d", &r1, &c1);
    int m1[r1][c1];
        initialize_matrix(r1, c1, m1, f);
    for(int i=0; i<r1; i++){
    	for(int j=0; j<c1; j++){
    		printf("%d ", m1[i][j]);
    	}
    	printf("\n");
    }
    printf("Dimensions of matrix 1 are %dX%d\n", r1, c1);
    
      int r2, c2;
      fscanf(f,"%d, %d", &r2, &c2);
      int m2[r2][c2];
        initialize_matrix(r2, c2, m2, f);
      for(int i=0; i<r2; i++){
    	for(int j=0; j<c2; j++){
    		printf("%d ", m2[i][j]);
    	}
    	printf("\n");
    }
printf("Dimensions of matrix 2 are %dX%d\n", r2, c2);
fclose(f);
FILE* fptr = fopen("output.txt", "w");
if(fptr == NULL){
	printf("Error opening file");
	return 1;
}
else{
if(c1!=r2){
	printf("Product can't be computed\n");
	fprintf(fptr, "Product can't be computed\n");
	fclose(fptr);
}
else{
	int product[r1][c2];
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			product[i][j]=0;
		}
	}
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			for(int k=0; k<c1; k++){
				product[i][j]+= m1[i][k] * m2[k][j];
			}
		}
	}
	printf("PRODUCT MATRIX:\n");
	fprintf(f,"PRODUCT MATRIX:\n");
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			printf("%d ", product[i][j]);
			fprintf(fptr, "%d ", product[i][j]);
		}
		printf("\n");
		fprintf(fptr, "\n");
	}
	fclose(fptr);
}
}
}

