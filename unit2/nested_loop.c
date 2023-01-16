/*
Using loops...
*/
#include <stdio.h>

int main(){
    int start1 = 0, stop1 = 0;
    int start2 = 0, stop2 = 0;
    int i = 0, j = 0; 

    /*
    It is always a good idea to output a prompt for the data 
    you are trying to read
*/

    printf("I am goin to run nested loops\n");
    printf("based on values you enter now\n");
    printf("Enter your first start value: \n");
    scanf("%d", &start1);
    printf("Enter your first stop value: \n");
    scanf("%d", &stop1);
    printf("Enter your second start value: \n");
    scanf("%d", &start2);
    printf("Enter your second stop value: \n");
    scanf("%d", &stop2);

    for(i = start1; i <= stop1; i++){
        for(j= start2; j <= stop2; j++){
            printf("i = %d and j = %d\n", i, j);
        }
    }
    return 0;
}