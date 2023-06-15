#include <stdio.h>

void main(){

    int x = 10;
    int y = 20;
    int z;

    printf("%d\n", x);
    x++;
    printf("%d\n", x);
    x++;
    printf("%d\n", x);
    --x;
    printf("%d\n", x);
    z = x++;
    printf("%d\n", x);
    printf("%d\n", z);
    z = --y;
    printf("%d\n", y);
    printf("%d\n", z);


}