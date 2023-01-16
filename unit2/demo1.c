/*Let's try using finding odd numbers... */
#include <stdio.h>

int main() { // main brace
    int start = 0, stop = 6; //demo multi var dec
    int value = 0; 
    /*
    For testing purposes, output a prompt for the data you are trying to read.
    printf( “finding odd number between\n" ); printf( "the two values you enter\n" ); printf( ”enter your first value:" );
    scanf( "%d", &start );
    printf( ”enter your second value:" ); scanf( "%d", &stop );
    Depending on the values you enter, the loop may run, or not...
    */
    value = start;
    while (value <= stop) { // brace 1 open
    /* is the value odd?? */
    if (value %2 == 1) { //brace 2 open
    printf("odd number: %d\n", value ); } //closing brace 2
    value = value + 1; } //closing brace 2
    return( 0 );
} //closing main brace

/// while loop may never execute
// do...while loop will always execute at least once