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
    while ((c = fgetc(f)) != EOF && c != '\n'); //fgetc return the value of the char read in the file and stores it in int c to check whether it equals EOF or \n. The result is that the file cursor is positioned at the beginning of the next line in the file.
    for(int i=0; i<rows; i++){
    	if(fgets(buffer, FILENAME_SIZE, f)!=NULL){ // !=NULL is used to read untill the end of the line and store the read string in the buffer
    		char* token = strtok(buffer, " "); //strtok initialises the token ptr to the substring in the ptr before a space is enountered
    	for(int j=0; j<cols; j++){
    		m1[i][j] = atoi(token); //atoi function converts the char to an int 
    		token = strtok(NULL, " "); //by using NULL, the strtok function continues from where it left off in the buffer arr, so the next char (element of matrix) is read
    	}
    }
    else{ //error handling
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
    printf("Dimension of matrix are %dX%d", rows, cols);
fclose(f);
}

