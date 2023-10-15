#include <stdio.h>
int main(){
int arr[4][4]={{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
printf("Given Array: \n");
for(int i=0; i<4; i++){
	for(int j=0; j<4; j++){
		printf("|%d| ", arr[i][j]);
	}
	printf("\n");
}
int sub[2][2];
for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
			int max=arr[i][j];
		for(int k=i; k<i+3; k++){
			for(int l=j; l<j+3; l++){
				if(max<arr[k][j]){
					max=arr[k][j];
				}
			}
			sub[i][j]=max;
		}
	}
}
printf("\nSub Array:\n");
for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
		printf("|%d| ", sub[i][j]);
	}
	printf("\n");
}
}
