// Write a program that asks the user to enter a wind speed (in knots), 
//then displays the corresponding description.

#include <stdio.h>

int main()
{
    int speed;

    printf("Enter a speed in knots: \n");
    scanf("%d", &speed);

    if (speed < 1) {
        puts("Calm");
    }
    else if (speed <= 3) {
        puts("Light Air");
    }
    else if (speed <= 27) {
        puts("Breeze");
    }
    else if (speed <= 47) {
        puts("Gale");
    }
    else if (speed <= 63) {
        puts("Storm");
    }
    else {
        puts("Hurricane");
    }
    return 0;
}