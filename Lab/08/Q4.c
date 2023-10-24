#include <stdio.h>
#include <string.h>
/*
Name: Syed Ukkashah
Date: 10/24/23
Decription: C program that validates a password
*/
int main() {
    char pswd[100];
    printf("Enter a password 8 characters long: ");
    gets(pswd);
    if(strlen(pswd) >= 8){ //function returns string length
    	if(strcmp(pswd, "Secure123")==0){ //function compares 2 strings
    		printf( "Login successful.Welcome!");
		}
	}
	
else{
	printf("Login unsuccessful");
}
	
    return 0;
}
