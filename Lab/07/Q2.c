/*
Programmer: Syed Ukkashah
Date: 12th Oct 2023
Description: Shifting Array elements
*/
#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;
    printf("Array Elements: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d, ", arr[i]);
    }
    for (int i = 0; i < d; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < 7; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[6] = temp;
    }
    printf("\nArray Elements: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d, ", arr[i]);
    }
}
