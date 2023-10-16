#include <stdio.h>
int main(){
	int dept,avg;
printf("Enter number of departments: ");
scanf("%d", &dept);
float arr[dept][5];
for(int i=0; i<dept; i++){
	for(int j=0; j<5; j++){
		printf("Enter hours worked on day %d in Department %d: ",j+1, i+1);
		scanf("%f", &arr[i][j]);
	}
}
int max = arr[0][0];
int min = arr[0][0];
float sum=0;
float maxdept=0, depthours;
int deptno;
for(int i=0; i<dept; i++){
	depthours=0;
	for(int j=0; j<5; j++){
		sum+=arr[i][j];
		depthours+=arr[i][j];
	}
	if(maxdept<depthours){
		maxdept=depthours;
		deptno=i;
	}
}
printf("Department %d had the most hours worked (%f hours)\n", deptno+1, maxdept);
float mindept= maxdept;
sum=0;
for(int i=0; i<dept; i++){
	depthours=0;
	for(int j=0; j<5; j++){
		sum+=arr[i][j];
		depthours+=arr[i][j];
	}
	if(mindept>depthours){
		mindept=depthours;
		deptno=i;
	}
}
printf("Department %d had the least hours worked (%f hours)\n", deptno+1, mindept);
avg = sum/(dept*5);
printf("average of hours worked is %d\n", avg);
}
