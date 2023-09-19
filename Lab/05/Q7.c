#include <stdio.h>
int main() {
    float actualprice, saved, discounted;
    printf("Enter the actual price of the items: ");
    scanf("%f", &actualprice);
    if(actualprice>=2000 && actualprice<=4000){
    	discounted = actualprice*0.8;
    	saved = actualprice*0.2; 
	}
	if(actualprice>=4001 && actualprice<=6000){
    	discounted = actualprice*0.7;
    	saved = actualprice*0.3; 
	}
	if(actualprice>6000){
    	discounted = actualprice*0.5;
    	saved = discounted; 
	}
    printf("Actual price: %f\nSaved amount: %f\nDiscounted price: %f\n", actualprice, saved, discounted);
    return 1;
}
