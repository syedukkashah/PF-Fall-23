#include <stdio.h>
void main(){
    int i,j,k;
    printf("Enter num of rows: ");
    scanf("%d", &i);
    for(k=1;k<=i;k++){
        for(j = 0; j<k; j++){
            printf("*");
        }
        printf("\n");
    }
}
