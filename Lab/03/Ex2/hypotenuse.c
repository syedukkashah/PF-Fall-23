#include <stdio.h>
#include <math.h>
int main(){
          float opposite, adjacent, hypotenuse; //declaration 
          printf("Enter length of adjacent side: ");
          scanf("%f", &adjacent);
          printf("Enter length of opposite side: ");
          scanf("%f", &opposite);
          hypotenuse = sqrt(pow(adjacent, 2) + pow(opposite, 2));
          printf("Hypotenuse is %f units", hypotenuse);
}//end main
