/* the following code checks if variable x corresponds to a calendar month */


#include <stdio.h>


int main(){
    int x;
    printf( "Please enter a number: \n" );
    scanf("%d",&x);
    switch (x) {
        case 0:
            puts("Not a calendar number");
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            puts("Is a calendar number");
            break;
        default:
            puts("Not a calendar number");
            break;
    }
}