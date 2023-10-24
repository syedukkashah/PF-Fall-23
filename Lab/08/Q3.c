#include <stdio.h>
#include <string.h>

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
