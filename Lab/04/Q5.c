#include <stdio.h>

int main() {
    int day1, month1, year1, day2, month2, year2;
    printf("Enter the 1st date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &day1, &month1, &year1);
    printf("Enter the 2nd date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &day2, &month2, &year2);
    while (year1 == year2) {
        while (month1 == month2) {
            while (day1 == day2) {
                printf("They are the same age\n");
                return 0;
            }

            if (day1 < day2) {
                printf("1st DOB is older.\n");
                return 0;
            } else {
                printf("2nd DOB is older.\n");
                return 0;
            }
        }

        if (month1 < month2) {
            printf("1st DOB is older.\n");
            return 0;
        } else {
            printf("2nd DOB is older.\n");
            return 0;
        }
    }

    if (year1 < year2) {
        printf("1st DOB is older.\n");
    } else {
        printf("2nd is older.\n");
    }

    return 0;
}


 
