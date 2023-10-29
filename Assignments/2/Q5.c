#include<stdio.h>
#include<math.h>	

int main(){
int n, temp=0;
printf("Enter n to print all Ramanujan numbers less than n^3: ");
scanf("%d", &n);
while(temp<(pow(n,3))){
for(int i=1; i++;){
	for(int j=1; j++;){
		for(int k=1; k++;){
			for(int l=1; l++;){
				if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
					int left = pow(i,3)+pow(j,3);
					int right = pow(k,3)+pow(l,3);
					if(right == left && left!=temp){
					if(temp<left){
						temp=left;
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
