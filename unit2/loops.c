#include <stdio.h>

int main()
{
    int x = 0;
    int y = 5;

    do {
        printf("x < y\n"); 
        x++;
    } while (x < y);
    return 0;
}