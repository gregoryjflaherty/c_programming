#include <stdio.h>

int main()
{
    int userInput;

    printf("Enter a date (mm/dd/yyyy): \n");
    scanf("%d", &userInput);

    printf("You entered the date %d\n", userInput);
    return 0;
}

