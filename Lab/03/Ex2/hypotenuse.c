#include <stdio.h>
#include <math.h>
int main(){
          int opposite, adjacent, hypotenuse; //declaration 
          printf("Enter length of adjacent side: ");
          scanf("%d", &adjacent);
          printf("Enter length of opposite side: ");
          scanf("%d", &opposite);
          hypotenuse = sqrt(pow(adjacent, 2) + pow(opposite, 2));
          printf("Hypotenuse is %d units", hypotenuse);
}//end main
