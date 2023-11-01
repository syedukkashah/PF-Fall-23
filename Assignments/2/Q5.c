#include<stdio.h>
#include<math.h>	
#include <stdlib.h>
int main(){
int n, temp=0;
printf("Enter n to print all Ramanujan numbers less than n^3: ");
scanf("%d", &n);
while(1){
for(int i=1;i<n; i++){
	for(int j=1;j<n;j++){
		for(int k=1;k<n; k++){
			for(int l=1;l<n; l++){
				if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
					int left = pow(i,3)+pow(j,3);
					int right = pow(k,3)+pow(l,3);
					if(right == left && left!=temp){
					if(temp<left){
						temp=left;
						if(temp>pow(n,3)){
							exit(0);
						}
						printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", left,i,j,k,l);
					}
				}
				}
			}
		}
	}
}
}
}
