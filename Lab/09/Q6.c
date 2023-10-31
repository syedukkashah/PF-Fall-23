#include <stdio.h>
//Programmer: Syed Ukkashah Ahmed Shah
//Desc: Finding GCD using recursive and iterative approach
//Date: 10/31/2023
int gcd(int a,int b) { //Function takes 2 integer arguments 
  int R;
  while ((a % b) > 0)  { //iterative approach
    R = a % b;
    a = b;
    b = R;
  }
  return b;
} // function end
int GCD(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return GCD(a-b, b); 
    return GCD(a, b-a); 
}
int main() { // main starts
int a,b;
printf("Enter 2 numbers to find their GCD: ");
scanf("%d %d", &a, &b);
printf("GCD using iterative approach is %d\n", gcd(a,b)); //GCD is printed
printf("GCD using recursive approach is %d\n", GCD(a,b)); //GCD is printed

}
