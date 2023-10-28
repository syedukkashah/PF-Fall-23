#include <stdio.h>
#include <string.h>
int main(){
	int time, price, day;
	int flights[5][2];
	flights[0][0] = 300;
	flights[0][1] = 0;
	flights[1][0] = 320;
    flights[1][1] = 310;
    flights[2][0] = 0;
    flights[2][1] = 280;
    flights[3][0] = 380;
    flights[3][1] = 0;
    flights[4][0] = 375;
    flights[4][1] = 400;
    printf("%9s %9s %9s %9s%9s\n","Day", "Morning", "Price", "Evening", "Price");
    
    for(int i=0; i<5; i++){
    	if(i==0){
    			printf("%9s", "Monday");
			}
			if(i==1){
    			printf("%9s", "Tuesday");
			}
			if(i==2){
    			printf("%9s", "Wednesday");
			}
			if(i==3){
    			printf("%9s", "Thursday");
			}
			if(i==4){
    			printf("%9s", "Friday");
			}
    	for(int j=0; j<2; j++){
			if(flights[i][j] == 0){
				printf("%9d", 0);
			}
			if(flights[i][j] != 0){
				printf("%9d", 1);
			}
			if(flights[i][j] == 0){
				printf("%9s", "-");
			}
			if(flights[i][j] != 0){
				printf("%9d", flights[i][j]);
			}
		}
		printf("\n");
	}
	printf("\nEnter flight time (0800- 1900 hours): ");
	scanf("%d", &time);
	if(time<8 || time>19){
		printf("No flights available during that time slot");
	}
	printf("\nEnter flight price (>=$300): ");
	scanf("%d", &price);
	if(price<300){
		printf("No flights available for $%d", price);
	}
		if(price>=300){
			if(time>=8 && time <=14){
			int j=0;
		 for(int i=0; i<5; i++){
		 	if(flights[i][j]<=price){
		 		switch(i){
		 		    case 0:
		 		    	if(flights[i][j]!=0){
		 			    printf("A Morning flight on Monday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 1:
		 				if(flights[i][j]!=0){
		 				printf("A Morning flight on Tuesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 2:
		 				if(flights[i][j]!=0){						 
		 				printf("A Morning flight on Wednesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 3:
		 				if(flights[i][j]!=0){
		 			printf("A Morning flight on Thursday is available for $%d\n", flights[i][j]);
		 		}
		 				break;
		 			case 4:
		 				if(flights[i][j]!=0){
		 				printf("A Morning flight on Friday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			default:
		 				printf("No flights available");
				 }
			 }
		 }
		}
		if(time >14 && time <=19){
				int j=1;
		 for(int i=0; i<5; i++){
		 	if(flights[i][j]<=price){
		 		switch(i){
		 		    case 0:
		 		    	if(flights[i][j]!=0){
		 			    printf("An Evening flight on Monday is available for $%d\n", flights[i][j]);
		 				break;
		 			}
		 			case 1:
		 				if(flights[i][j]!=0){
		 				printf("An Evening flight on Tuesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 2:
		 				if(flights[i][j]!=0){
		 				printf("An Evening flight on Wednesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			
		 			case 3:
		 				if(flights[i][j]!=0){
		 			printf("An Evening flight on Thursday is available for $%d\n", flights[i][j]);
		 		}
		 				break;
		 			case 4:
		 				if(flights[i][j]!=0){
		 				printf("An Evening flight on Friday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			default:
		 				printf("No flights available");
				 }
			 }
		 }
		}
	}
	printf("\n If traveller is looking for morning slot flights: \n");
	int j=0;
	for(int i=0; i<5; i++){
		switch(i){
		 		    case 0:
		 		    	if(flights[i][j]!=0){
		 			    printf("A Morning flight on Monday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 1:
		 				if(flights[i][j]!=0){
		 				printf("A Morning flight on Tuesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 2:
		 				if(flights[i][j]!=0){						 
		 				printf("A Morning flight on Wednesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 3:
		 				if(flights[i][j]!=0){
		 			printf("A Morning flight on Thursday is available for $%d\n", flights[i][j]);
		 		}
		 				break;
		 			case 4:
		 				if(flights[i][j]!=0){
		 				printf("A Morning flight on Friday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			default:
		 				printf("No flights available");
		 }
	}
		printf("\n If traveller is looking for evening slot flights: \n");
	 j=1;
	for(int i=0; i<5; i++){
		switch(i){
		 		    case 0:
		 		    	if(flights[i][j]!=0){
		 			    printf("An evening flight on Monday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 1:
		 				if(flights[i][j]!=0){
		 				printf("An evening flight on Tuesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 2:
		 				if(flights[i][j]!=0){						 
		 				printf("An evening flight on Wednesday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			case 3:
		 				if(flights[i][j]!=0){
		 			printf("An evening flight on Thursday is available for $%d\n", flights[i][j]);
		 		}
		 				break;
		 			case 4:
		 				if(flights[i][j]!=0){
		 				printf("An evening flight on Friday is available for $%d\n", flights[i][j]);
		 			}
		 				break;
		 			default:
		 				printf("No flights available");
		 }
	}
	printf("\nEnter the weekday (1-5) you would like to see available flights for: ");
	scanf("%d", &day);
	char days[10];
	switch(day){
		case 1:
			strcpy(days,"Monday");
			break;
		case 2:
			strcpy(days, "Tuesday");
			break;
		case 3:
			strcpy(days, "Wednesday");
			break;
		case 4:
			strcpy(days, "Thursday");
			break;
		case 5:
			strcpy(days, "Friday");
			break;
	}
		if(flights[day-1][0]!=0){
			printf("A morning flight is available for $%d on %s\n", flights[day-1][0], days);
		}
		if(flights[day-1][1]!=0){
			printf("An evening flight is available for $%d\n on %s\n", flights[day-1][1], days);
		}
	}
	
