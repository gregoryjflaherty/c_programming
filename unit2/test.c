/*
Using loops...
*/
#include <stdio.h>

int main(){
    double value = 0;

    printf("Enter your number: \n");
    scanf("%lf", &value);

    while (value > 0){
        printf("You have $%.2f left\n", value);
        value = value - 0.25;
    }
    return 0;
}

//     value = start;
//     while (value <= stop) { // brace 1 open
//     /* is the value odd?? */
//     if (value %2 == 1) { //brace 2 open
//     printf("odd number: %d\n", value ); } //closing brace 2
//     value = value + 1; } //closing brace 2
//     return( 0 );
// }