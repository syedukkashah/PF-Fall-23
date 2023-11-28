/*
*Programmer: Syed Ukkashah
*Date: 11/28/2023
*Description: Reading a file using filing functions in C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 100
#define MAX_CELL_SIZE 256

void readCSV(const char *filename);

int main() {
    const char *filename = "your_csv_file.csv";
    readCSV(filename);

    return 0;
}

void readCSV(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char line[MAX_CELL_SIZE];
    char *token;
    char header[MAX_COLS][MAX_CELL_SIZE];
    int numColumns = 0;
    int numRows = 0;

    // Read and print header
    if (fgets(line, sizeof(line), file) != NULL) {
        // Tokenize the header
        token = strtok(line, ",");
        while (token != NULL) {
            strcpy(header[numColumns], token);
            numColumns++;
            token = strtok(NULL, ",");
        }

        // Print header with a blank line after
        for (int i = 0; i < numColumns; i++) {
            printf("%s,", header[i]);
        }
        printf("\n\n");
    }

    // Read and print data
    while (fgets(line, sizeof(line), file) != NULL && numRows < MAX_ROWS) {
        token = strtok(line, ",");
        for (int i = 0; i < numColumns && token != NULL; i++) {
            printf("%s\t|", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
        numRows++;
    }

    printf("\nTotal number of rows: %d\n", numRows);
    printf("Total number of columns: %d\n", numColumns);

    fclose(file);
}
