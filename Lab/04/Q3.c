#include <stdio.h>
#include <math.h>
int main(){
        int n, i, num;
        int sum=0;
        printf("Enter number of inputs: ");
        scanf("%d", &n);
        while(n>0){
                 printf("Enter num: ");
                 scanf("%d", &num);
                 sum = sum + pow(num, 2);
                 n--;
                }
        printf("%d", sum);
        return 1;
}
