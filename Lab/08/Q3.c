#include <stdio.h>
#include <string.h>
/*
Name: Syed Ukkashah
Date: 10/24/23
Decription: C program that reads a
text input from the user and searches for a specific character (e.g., 'a')
within the text using the strchr function. The total count of
occurrences of the character in the input text is displayed.
*/
int main() {
    char text[100];  /* variable declarations and initializations */
    char searchChar;
    int count = 0,i; 

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter a character to search for: ");
    scanf(" %c", &searchChar); // Note the space before %c to consume any leading whitespace.

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == searchChar) {
            count++;
        }
    }

    printf("Total occurrences of '%c' in the text: %d\n", searchChar, count);

    return 0;
}
