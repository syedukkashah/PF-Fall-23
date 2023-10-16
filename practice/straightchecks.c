#include <stdio.h>
int vertical(int x, int y,int arr[x][y]){
	int vert=0;
	for(int j=0; j<y; j++){
		int count=0;
		for(int i=0; i<x; i++){
			if(arr[i][j]=='s'){
				count++;
			}
		}
		if(vert<count){
			vert=count;
		}
	}
	return vert;
}
int horizontal(int x, int y,int arr[x][y]){
	int hor=0;
	for(int j=0; j<y; j++){
		int count=0;
		for(int i=0; i<x; i++){
			if(arr[j][i]=='s'){
				count++;
			}
			else{
				count=0;
				continue;
			}
		}
		if(hor<count){
			hor=count;
		}
	}
	return hor;
}
int diagonal(int x, int y,int arr[x][y]){
	int diag1=0;

	return hor;
}


 int main(){
	int arr[5][5]={{'s','d', 'd', 's', 'd' }, {'s', 'd', 's', 'd', 's'}, {'d', 's', 'd', 's', 's'}, {'s', 's', 'd', 's', 's'}, {'d', 'd', 's', 'd', 'd'}};
	printf("%d\n", vertical(5,5,arr));
	printf("%d", horizontal(5,5,arr));
	
}
