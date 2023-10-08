#include <stdio.h>
void main()
{
    int arr1[100];
    int i, max, min, n;
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
       for(i=0;i<n;i++)
            {
	      printf("Enter element %d : ",i+1);
	      scanf("%d",&arr1[i]);
	    }
    max = arr1[0];
    min = arr1[0];
    for(i=1; i<n; i++)
    {
        if(arr1[i]>max)
        {
            max = arr1[i];
        }
        if(arr1[i]<min)
        {
            min = arr1[i];
        }
    }
    printf("Largest element is : %d\n", max);
    printf("Smallest element is : %d\n\n", min);
}
