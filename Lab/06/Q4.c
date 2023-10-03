/**.
* Programmer: Syed Ukkashah Ahmed Shah
* Desc: Practicing loops with dummy problems
* Date: 10/3/2023
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
 int b,a;
  printf("Enter b: ");
  scanf("%d", &b);
  printf("Enter a: ");
  scanf("%d", &a);
  while(a<=b){
  	if(a%2==0 && a>9){
  			printf("Even, ");
			}
		if(a%2!=0 && a>9){
			printf("Odd, ");
		}
  	switch(a){
  		case 0:
  		    printf("Zero, ");
  		    break;
  		case 1:
  			printf("One, ");
  			break;
  		case 2:
  			printf("Two, ");
  			break;
  		case 3:
  			printf("Three, ");
  			break;
  		case 4:
  			printf("Four, ");
  			break;
  		case 5:
  			printf("Five, ");
  			break;
  		case 6:
  			printf("Six, ");
  			break;
  		case 7:
  			printf("Seven, ");
  			break;
  		case 8:
  			printf("Eight, ");
  			break;
  		case 9:
  			printf("Nine, ");
  			break;
	  }
	  a++;
  }
}
  
