/*Programmer: Syed Ukkashah
*Date: 11/28/2023
*Description: Compares two files and checks if their contents are equal
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createWordFile(const char *filename, const char *content);
int compareFiles(const char *file1, const char *file2);

int main() {
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";
    const char *content = "This is a test.";

    // Create Word files
    createWordFile(file1, content);
    createWordFile(file2, content);

    // Compare files
    if (compareFiles(file1, file2)) {
        printf("The contents of the two files are equal.\n");
    } else {
        printf("The contents of the two files are not equal.\n");
    }

    return 0;
}

void createWordFile(const char *filename, const char *content) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    // Write content to the file
    fwrite(content, sizeof(char), strlen(content), file);

    fclose(file);
}

int compareFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening files for comparison");
        exit;
    }
}

