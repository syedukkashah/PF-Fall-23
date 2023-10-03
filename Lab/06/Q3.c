/**.
* Programmer: Syed Ukkashah Ahmed Shah
* Desc: Practicing loops with dummy problems
* Date: 10/3/2023
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  int i=1, n1, n2, HCF=1, LCM=1, small;
  printf("Enter 1st number: ");
  scanf("%d", &n1);
  printf("Enter 2nd number: ");
  scanf("%d", &n2);
  int p=n1;
  int q=n2;
  if(n1<n2){
  	small=n1;
  }
  else{
  	small=n2;
  }
  while(i<=small){
  	if(n1%i==0 && n2%i==0){
  	    HCF = HCF*i;
  	    n1/=i;                                               
	    n2/=i;
	    i=1;
	}
	i++;
  }
  i=1;
  printf("HCF is %d\n", HCF);
  LCM = (p*q)/HCF;
   printf("LCM is %d", LCM);
}
  
