#include <stdio.h>

int main(){
    int gamePoints[10];

    int* firstPtr;
    firstPtr = &gamePoints[0];
    *firstPtr = 21;
    printf("The pointer holds value %d at address %p\n", gamePoints[0], firstPtr);
    return 0;
}