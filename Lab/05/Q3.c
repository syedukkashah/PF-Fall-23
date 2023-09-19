#include <stdio.h>
#include <stdlib.h>
int main(){
	char choice;
	printf("Are you sure to delete? (Y/y | N/n): ");
	scanf(" %c", &choice);
	switch (choice){
		case 'Y':
		case 'y':
			printf("Deleted successfully");
			break;
		case 'N':
		case 'n':
			printf("Delete cancelled");
			break;
		default: 
		printf("Choose the right option");
	}
}
