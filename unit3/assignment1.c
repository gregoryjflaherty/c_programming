#include <stdio.h>

int main() {
    // declare integers
    int userNumbers[10], userSelection, numberCount, i, j;
    
    // pick user numbers
    printf("Please pick 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &userNumbers[i]);
    }

    // identify a number to count
    printf("Please a pick number to identify: ");
    scanf("%d", &userSelection);

    // loop over array and count if number is present
    numberCount = 0;
    j = 0;
    // could also just do j < 10 here 
    while (j < sizeof(userNumbers)) {
        if (userSelection == userNumbers[j]) {
            numberCount++;
        }
        j++;
    }

    //respond with correct count
    printf("The number %d is present %d time ", userSelection, numberCount);
    return 0;
}