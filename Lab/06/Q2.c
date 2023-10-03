/**
* Programmer: Syed Ukkashah Ahmed Shah
* Desc: Practicing loops with dummy problems
* Date: 10/3/2023
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  int sum=0;
  printf("%d, ", t2);
  for (i = 3; nextTerm <= 10000; ++i) {
  	if(nextTerm%3 == 0 || nextTerm%5 == 0 || nextTerm%7 == 0){
  		sum+=nextTerm;
	  }
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
	}
	printf("\n\nSum of the generated Fibonacci numbers divisible by 3, 5 or 7 only is %d", sum);
	return 0;
  }
