#include<stdio.h>
#include<math.h>
int main(){
	int t;
	int size;
	int a,b;
	printf("Input size of array: ");
	scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
    	printf("Input element at index %d: ", i);
    	scanf("%d", &arr[i]);
	}
	printf("\nInput Array: \n");
	for(int i=0; i<size; i++){
		printf("%3d", arr[i]);
	}
    printf("\nEnter t: ");
    scanf("%d", &t);
    printf("\nPairs: ");
    for(int i=0; i<size; i++){
    	for(int j=0; j<size; j++){
    		if(arr[i]>arr[j] && (arr[i]+arr[j]==t)){
    			printf("(%d, %d)", arr[i], arr[j]);
			}
		}
	}
}
