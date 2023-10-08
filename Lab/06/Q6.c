#include<stdio.h>

int main()
{
    int sticks = 21;
    int num;
    int comp;
    while(1)
    {
        printf("total number of matchSticks left are %d\n", sticks);
        printf("Pick up to 4 matchsticks: ");
        scanf("%d", &num);
        if(num > 4 || num < 1)
        {
            continue;
        }
        int comp = 5 - num;
        printf("computer picked %d sticks\n", comp);
        sticks-=5;
        if (sticks == 1)
        {
            printf("matchSticks left: %d\n", sticks);
            printf("\n\n\n");
            printf("you lose the game\n");
            break;
        }
    }
}
