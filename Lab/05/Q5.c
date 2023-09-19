#include <stdio.h>
int main(){
	char c;
	printf("Enter a character: ");
	scanf(" %c", &c);
	if(c>=32 && c<=47 || c>=58 && c<=64|| c>=91 && c<=96 || c>=123 && c<=126){
		printf("This is a special character");
	}
	if(c>=97 && c<=122){
		printf("This is a lowercase alphabet");
	}
	if(c>= 65 && c<=90){
		printf("This is an uppercase alphabet");
	}
	if(c>='0' && c<= '9'){
		printf("This is a digit");
	}
}
