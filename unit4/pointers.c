#include <stdio.h>

int main(){
    // A pointer is a variable that contains the address 
    //of another variable 

    // pointers must be declared 
    // typename* varname;
    int a = 12;
    int* intPtr;
    intPtr = &a;
    printf("Variable a holds value %d at address %p\n", a, intPtr);
    
    *intPtr = 5;
    printf("Variable a holds value %d at address %p\n", a, intPtr);
    return 0;
}