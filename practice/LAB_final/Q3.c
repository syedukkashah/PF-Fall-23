/*Description: Program takes int inputs from user until -1 is entered. Collatz Sequence of the nums are stored in a dynamic
memory allocated array
*/
#include <stdio.h>
#include <stdlib.h>
int* CollatzSequence(int);
int main()
{
    int num=0;
    while(1){
    printf("Enter a number for it's Collatz Sequence (-1 to exit): ");
    scanf("%d", &num);
    if(num== -1){
        break;
    }
    else{
    int* sequence = CollatzSequence(num);
    for(int i=0; sequence[i]!=1; i++){
        printf("%d ", sequence[i]);       
    }
    printf("1\n");
    free(sequence);
}
}
    return 0;
}
int* CollatzSequence(int length){
    int* seq = (int*)malloc(length * sizeof(int));
    seq[0] = length;
    for(int i=1; length!=1; i++){
        if(length%2 == 0 && length!=0){
            length/=2;
            seq[i] = length;
            continue;
        }
        if(length%2!=0 && length!=0){
            length = (3*length)+1;
            seq[i] = length;
            continue;
        }
    }
    return seq;
}
