#include <stdio.h>
#include <math.h>
int main(){
        int a, b, c;
        printf("ax^2+bx+c");
        printf("\nEnter a: ");
        scanf("%d", &a);
        printf("\nEnter b: ");
        scanf("%d", &b);
        printf("\nEnter c: ");
        scanf("%d", &c);
        float root1 = (-b + sqrt( pow(b,2) - (4*a*c)))/(2*a);
        float root2 = (-b - sqrt( pow(b,2) - (4*a*c)))/(2*a);  
        printf("The solutions are %f and %f", root1, root2);
        return 1;
}
