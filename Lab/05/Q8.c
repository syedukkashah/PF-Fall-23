#include <stdio.h>
int main() {
    int SensorValue; 
    printf("Enter the light sensor value (0-1000): ");
    scanf("%d", &SensorValue);
    if (SensorValue > 500) {
        printf("It's exposed to sunshine. Setting brightness to maximum.\n");
    } else if (SensorValue >= 100 && SensorValue <= 500) {
        printf("It's daytime or a well-lit environment. Setting moderate brightness.\n");
    } else if (SensorValue >= 0 && SensorValue < 100) {
        printf("It's evening or a low-light environment. Setting low brightness.\n");
    } else {
        printf("Invalid light sensor value. Please enter a value between 0 and 1000.\n");
    }

    return 0;
}
