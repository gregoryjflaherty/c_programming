#include <stdio.h> #include <math.h>
/*
There are 3 steps involved when using a function. 1. Declare your function.
*/
    int triplets( int trip); //note we used trip here but num there
//the parameter names here are not connected to the names there //The order and type must match
int main() { 
    int v,w;
    printf( "What value would you like to triplet:\n"); scanf_s("%d",&v);
    printf("Now I am printing the results of the function %d", w); /*
2. Call your function Here is step 2
*/
    w =triplets(v); // v is an argument. Its content is dumped into
    printf("Now I am printing the results of the function %d", w); 
    return( 0 );
} /*
3. Implement the body of your function
User defined functions must be implemented with the exact
definition listed at the top of the file. My advice is
to copy and paste, so there is no doubt that these two match exactly .
*/
int triplets( int num)
{
//do not use any print or scan statements in the function // remember: black box
int counter;
int total = 0;
for (counter=0; counter<=num;counter++) total+=(counter*counter*counter);
return total; 
}
/*
Is there a chance that v, which was used to pass the input be changed?
NO! There is no connection between v and num. This is the way pass-by-value works...more on this later