// 2. Write a program that prompts the user to enter a telephone
//  number in the form (xxx) xxx-xxxx and then displays the number 
//  in the format xxx.xxx.xxxx (see below).

// Enter a  phone number [(xxx) xxx-xxxx]: (404) 817-6200
// You entered the data 404.817.6200

#include <stdio.h>

int main()
{
    int first, second, third;

    printf("Enter a  phone number [(xxx) xxx-xxxx]: \n");
    scanf("(%d) %d-%d", &first, &second, &third);

    printf("You entered the data %d.%d.%d\n\n", first, second, third);
    return 0;
}