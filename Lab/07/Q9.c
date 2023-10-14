#include <stdio.h>
int main(){
	int branches = 3;
	int phones = 4;
	int arr[50][50];
	int totalsum=0;
	int branchsum[50];
	int sum, temp;
	for(int i = 0; i<branches; i++){
		sum=0;
		for(int j=0; j<phones; j++ ){
			printf("Enter bill for Phone ID %d, Branch ID %d: ", j, i);
			scanf("%d", &arr[i][j]);
			totalsum+= arr[i][j];
			sum+= arr[i][j];
		}
		branchsum[i]=sum;
	}
	printf("\nTotal Bill for all branhces: %d", totalsum);
	printf("\n");
	for(int i = 0; i<branches; i++){
		printf("Bill for Branch ID %d: %d\n", i, branchsum[i]);
	}
	int maxBranch=0 ,branchID, branchtotal;
	for(int i = 0; i<branches; i++){
		branchtotal=0;
		for(int j = 0; j< phones; j++){
			branchtotal += arr[i][j];
		}
		if(branchtotal > maxBranch){
			maxBranch = branchtotal;
			branchID = i;
		}
	}
	printf("BRANCH ID %d had the max bill\n", branchID);
	int maxphone= arr[0][0], phoneID;
	for(int i = 0; i<branches; i++){
		for(int j = 0; j<phones; j++){
			if(arr[i][j]>maxphone){
				maxphone = arr[i][j];
				branchID = i;
				phoneID = j;
			}
		}
	}
	printf("BRANCH ID %d, PhoneID %d had the max bill which was %d", branchID, phoneID, maxphone);
}
