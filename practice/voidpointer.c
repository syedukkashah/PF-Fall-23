#include <stdio.h>
int main(){
    void *vp;
    int a=5;
    float b = 8.83;
    char c = 'h';

    vp=&a;
    printf("%d\n", *(int*)vp);
    vp=&b;
     printf("%f\n", *(float*)vp);
     vp=&c;
      printf("%c\n", *(char*)vp);
    return 0;
}
