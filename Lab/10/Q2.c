/*
 * Creator: Syed Ukkashah
 * Date: 14/11/23
 * Description: swapping two variable datatypes using XOR
 */

#include <stdio.h>

void swap(void *n1, void *n2, char type)
{
    if (type == 'd' || type == 'f' || type == 'l'){
        *(long *)n1 ^= *(long *)n2;
        *(long *)n2 ^= *(long *)n1;
        *(long *)n1 ^= *(long *)n2;
    }
    else if (type == 'c')
        *(char *)n1 ^= *(char *)n2;
        *(char *)n2 ^= *(char *)n1;
        *(char *)n1 ^= *(char *)n2;
} // end swap()

int main()
{
    int n1 = 4, n2 = 2;
    char c1 = 'R', c2 = 'E';
    float float1 = 3.5, float2 = 1.5;

    // pass void * casted pointer
    printf("%d %d ", n1, n2);
    swap((void *) &n1, (void *) &n2, 'd');
    printf("swaps %d %d\n", n1, n2);

    printf("%c %c ", c1, c2);
    swap((void *) &c1, (void *) &c2, 'c');
    printf("swaps %c %c\n", c1, c2);

    printf("%.1f %.1f ", float1, float2);
    swap((void *) &float1, (void *) &float2, 'f');
    printf("swaps %.1f %.1f", float1, float2);

    return 0;
} // end main()
