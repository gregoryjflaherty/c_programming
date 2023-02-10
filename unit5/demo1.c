#include <stdio.h>
//note we need this for input and output 
#include <string.h> 
// we need this for working with strings 
int main(){ 
/* String Declaration*/ 
char yourname[20];
printf("Enter your name:");
/*getting input string and storing it in yourname*/
scanf("%s", &yourname,20); //.net likes scanf_s to avoid running into runtime error if input is too long
/*Displaying String*/
printf("%s",yourname);
//note %s is used to output a string
return 0;
} 