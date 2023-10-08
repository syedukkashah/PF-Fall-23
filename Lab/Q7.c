#include<stdio.h>

int main()
{
   printf("Enter total number of elements: ");
   int size, n;
   int sum=0;
   scanf("%d", &size);
   int arr[size];
   for(int i =0; i<size; i++){
   	printf("Enter value of element %d: ", i+1);
   	scanf("%d", &n);
   	arr[i]=n;
   	sum+=arr[i];
   }
   printf("\nSum of all elements is %d", sum);
   
}
