/*
PF LAB FINAL Q1 -> Semester 1 2023
Read from an input.txt file
3, 3
1 2 3
4 5 6
7 8 9

3,2
1 2
3 4
5 6
The dimensions are written above the matrix elements. Read the file and determine if the two matrices can be multiplied. 
Display the product matrix in an output.txt file 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#define MAX_LINE 40000
#define FILENAME_SIZE 80000
int main() {
    FILE* f = fopen("input.txt", "r");
    int rows, cols;
    char buffer[FILENAME_SIZE];
    fscanf(f,"%d, %d", &rows, &cols);
    int m1[rows][cols];
     int c;
    while ((c = fgetc(f)) != EOF && c != '\n');
    for(int i=0; i<rows; i++){
    	if(fgets(buffer, FILENAME_SIZE, f)!=NULL){
    		char* token = strtok(buffer, " ");
    	for(int j=0; j<cols; j++){
    		m1[i][j] = atoi(token);
    		token = strtok(NULL, " ");
    	}
    }
    else{
    	printf("Error reading matrix elements\n");
    	return 1;
    }
}
    for(int i=0; i<rows; i++){
    	for(int j=0; j<cols; j++){
    		printf("%d ", m1[i][j]);
    	}
    	printf("\n");
    }
    printf("Dimension of matrix are %dX%d\n", rows, cols);
    
      int r2, c2;
      fscanf(f,"%d, %d", &r2, &c2);
      int m2[r2][c2];
      int a;
      while ((a = fgetc(f)) != EOF && a != '\n');
      char buff2[FILENAME_SIZE];
      for(int i=0; i<r2; i++){
      	if(fgets(buff2, FILENAME_SIZE, f)!=NULL){
      		char*tok2 = strtok(buff2, " ");
      		for(int j=0; j<cols; j++){
      			m2[i][j]=atoi(tok2);
      			tok2 = strtok(NULL, " ");
      		}
      	}
      }
      for(int i=0; i<r2; i++){
    	for(int j=0; j<c2; j++){
    		printf("%d ", m2[i][j]);
    	}
    	printf("\n");
    }
printf("Dimension of matrix are %dX%d", r2, c2);
fclose(f);
}


