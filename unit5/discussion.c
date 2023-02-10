// gets user input asking for firts and last name
// concatenates the 2 strings 
// then inputs the total length of full name 

#include <stdio.h>
#include <string.h>
int main() {
    int totalLength;
    char fName[50];
    char lName[50];

    printf("What is your first name?\n");
    scanf("%s", fName);
    printf("What is your last name?\n");
    scanf("%s", lName);
    
    totalLength = strlen(fName) + strlen(lName);

    printf("Your full name is %d characters long\n", totalLength);

   return 0;
}