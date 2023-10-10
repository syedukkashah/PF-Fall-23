#include <stdio.h>
#include <stdlib.h>
/*
Programmer: Syed Ukkashah
Date: 12th Sept 2023
Description: Checking symmetry of array
*/

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isSymmetric = 1; 

 
    if (rows != cols) {
        isSymmetric = 0;
    } else {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0; 
                    break; 
                }
            }
            if (!isSymmetric) {
                break; 
            }
        }
    }
    if (isSymmetric) {
        printf("Array is Symmetric:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Array is not Symmetric.\n");
    }

    return 0;
}
