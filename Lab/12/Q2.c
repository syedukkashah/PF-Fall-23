/*Programmer: Syed Ukkashah
*Date: 11/28/2023
*Description: Compares two files and checks if their contents are equal
*/
#include <stdio.h>
#include <stdlib.h>

int compareFiles(const char *file1, const char *file2);

int main() {
    const char *file1Path = "file1.docx";
    const char *file2Path = "file2.docx";

    // Creating two separate Word files with the text "This is a test."
    FILE *file1 = fopen(file1Path, "wb");
    FILE *file2 = fopen(file2Path, "wb");

    if (file1 == NULL || file2 == NULL) {
        perror("Error creating files");
        exit(EXIT_FAILURE);
    }

    fprintf(file1, "This is a test.");
    fprintf(file2, "This is a test.");

    fclose(file1);
    fclose(file2);

    // Compare the contents of the two files
    if (compareFiles(file1Path, file2Path)) {
        printf("The contents of the two files are equal.\n");
    } else {
        printf("The contents of the two files are not equal.\n");
    }

    return 0;
}

int compareFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }

    int ch1, ch2;

    // Compare file contents character by character
    while (((ch1 = fgetc(f1)) != EOF) && ((ch2 = fgetc(f2)) != EOF)) {
        if (ch1 != ch2) {
            fclose(f1);
            fclose(f2);
            return 0; // Files are not equal
        }
    }

    // Check if both files reached the end simultaneously
    if (ch1 == EOF && ch2 == EOF) {
        fclose(f1);
        fclose(f2);
        return 1; // Files are equal
    }

    fclose(f1);
    fclose(f2);
    return 0; // Files are not equal
}
