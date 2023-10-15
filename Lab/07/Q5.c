#include <stdio.h>
void hat();
void face();
void chest();
void legs();
void main()
{
    hat();
    face();
    chest();
    legs();
	    
}
void chest(){
	int i,j;
	printf("\n\n");
	for(i=0; i<8; i++){
		if(i==5 || i==7){
			printf("|");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
     for(j=0; j<13;j++){
			printf("*");
		}
		printf("\n");
		for(i=0; i<4; i++){
			for(j=0; j<13; j++){
				if(j==2 || j==3 ||j==9|| j==10){
				printf(" ");
			}
			else{
				printf("*");
			}
			}
			printf("\n");
		}
	}
void hat(){
	for(int i=0; i<4; i++){
			if(i==3){
				printf(" ");
			}
			else{
				for(int spaces=1; spaces<= 4; spaces++){
				printf(" ");
			}
		}
		if(i==3){
			for(int j =0; j<11; j++){
				printf("*");
			}
		}
		else{
			for(int j =0; j<5; j++){
			printf("*");
		}
		}
		printf("\n");
	}
}
void face(){
	int row, col;
	for (row=0; row<4; row++){
		for(col=0; col<9; col++){
			if(row==0){
				if(col==4 || col==8){
					printf("*");
				}
				else{
					printf(" ");
				}
		    }
	    }
    }
    printf("\n");
    for(int i = 0; i<9; i++){
    	if(i==6){
    		printf("|");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
	for(int i = 0; i<9; i++){
    	if(i==5){
    		printf("\\_/");
		}
		else{
			printf(" ");
		}
	}
}
void legs(){
	for(int i=1; i<=9; i++){
		if(i<=4){
			printf(" ");
		}
		else{
			printf("*");
		}
	}
	printf("\n");
	for(int i=1;i<=5; i++ ){
		for(int j=1; j<=9; j++){
			if(j<=4 || j==7){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	for(int i=1; i<=13; i++){
		if(i==1 || i==7 || i==13){
			printf(" ");
		}
		else{
			printf("*");
		}
	}

}

	
