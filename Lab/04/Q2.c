
#include <stdio.h>
int main(){
        int n, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &n);
        i=0; 
        while(i<n){
               i++;
               j=0;
               while(j<n){ 
                    printf("*");
                     j++;
                }
                printf("\n");
        }
        return 1;
}
