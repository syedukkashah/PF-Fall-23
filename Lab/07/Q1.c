#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter 1st number: ");
    scanf("%d", &m);
    printf("Enter 2nd number: ");
    scanf("%d", &n);
    int quotient1 = 0, quotient2 = 0, divisor;
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    int num1 = m;
    int num2 = n;
    while (m >= divisor)
    {
        m -= divisor;
        quotient1++;
    }
    while (n >= divisor)
    {
        n -= divisor;
        quotient2++;
    }
    printf("%d/%d -> Quotient: %d, Remainder: %d\n", num1, divisor, quotient1, m);
    printf("%d/%d -> Quotient: %d, Remainder: %d\n", num2, divisor, quotient2, n);
}
