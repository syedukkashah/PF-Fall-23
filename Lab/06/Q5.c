/**.
* Programmer: Syed Ukkashah Ahmed Shah
* Desc: Practicing loops with dummy problems
* Date: 10/3/2023
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
 int i = 0;
 while(i<=6){
 	if(i%2==0){
 		printf("%d\t%d\t%d\t%d\n", i, i, i, i);
	 }
	 else{
	 		printf("\t%d\t%d\t\n", i, i);
	 }
	 i++;
 }
}
