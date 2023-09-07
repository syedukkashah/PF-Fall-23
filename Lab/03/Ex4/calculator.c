#include <stdio.h>

int main() {
    char operation;
    float num1, num2, result;

    while (1) {
        printf("Enter an operation (+, -, *, /) or 'e' to exit: ");
        scanf(" %c", &operation);

        if (operation == 'e' || operation == 'E') {
            printf("Exiting the program.\n");
            break;
        }

        if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            printf("Invalid operation. Please enter +, -, *, /, or 'e' to exit.\n");
            continue;
        }

        printf("Enter num 1: ");
        scanf("%f", &num1);
        printf("Enter num2: ");
        scanf("%f", &num2);

        switch (operation) {
            case '+':
                result = num1 + num2;
                printf("Result: %f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %f\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %f\n", result);
                } else {
                    printf("Division by zero is not allowed.\n");
                }
                break;
        }
    }

    return 0;
}
