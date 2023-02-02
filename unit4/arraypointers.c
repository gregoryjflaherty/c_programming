#include <stdio.h>

int main(){
    //an array is a pointer 
    int grades[20];
    // grades ia s pointer to some RAM location 
    // with the next 20 locations
    // grands[n] starts by starting at address 1000, then 
    // adding n locations. grades always points to [0]
    int* intPtr;
    intPtr = &grades[0];
    *intPtr = 29;
    printf("Variable grades[0] holds value %d at address %p\n", grades[0], intPtr);
    
    *(intPtr + 1) = 32; 
    return 0;
}