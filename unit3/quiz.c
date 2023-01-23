#include <stdio.h>

int main() {
    // declare variables
    int myarray[50], i, value, average;

    // iterate over myarray and increase values by 10
    value = 10;
    i = 0;
    while (i < 10) {
        myarray[i] = value;
        value += 10;
        i++;
    }

    //calculate average
    average = (myarray[0] + myarray[9]) / 2;

    //respond with correct average
    printf("The numbers %d and %d average out to %d\n", myarray[0], myarray[9], average);
    return 0;
}