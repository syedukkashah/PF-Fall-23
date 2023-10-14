#include <stdio.h>
int main(){
	int i,j,arr[100],num, temp,n;
	printf("Enter size of array: ");
	scanf("%d", &num);
	for(i=0;i<num;i++){
		printf("Enter element at index %d: ", i);
		scanf("%d", &n);
		arr[i]=n;
	}
	for(i=0;i<num;i++){
		for(j=0; j<num-1; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0; i<num; i++){
		printf("%d, ", arr[i]);
	}
}
