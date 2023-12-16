#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 40000

int main() {
    FILE* f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("Error opening file");
        return 1;
    } else {
        char buffer[MAX_LINE];
        if (fgets(buffer, sizeof(buffer), f) != NULL) {
            int rows, cols;
            // Extracting dimensions from the buffer
            if (sscanf(buffer, "%d,%d", &rows, &cols) != 2) {
                printf("Error reading matrix dimensions");
                return 1;
            }
            int matrix[rows][cols];
            // Now you can read the matrix elements
            for (int i = 0; i < rows; ++i) {
                if (fgets(buffer, sizeof(buffer), f) != NULL) {
                    char* token = strtok(buffer, " ");
                    for (int j = 0; j < cols; ++j) {
                        matrix[i][j] = atoi(token);
                        token = strtok(NULL, " ");
                    }
                } else {
                    printf("Error reading matrix elements");
                    return 1;
                }
            }
            for(int i=0; i<rows; i++){
            	for(int j=0; j<cols; j++){
            		printf("%d ", matrix[i][j]);
            	}
            	printf("\n");
            }

            // Now you have the matrix with dimensions rows x cols
            // Do something with the matrix here
        }
    }

    fclose(f);
    return 0;
}
