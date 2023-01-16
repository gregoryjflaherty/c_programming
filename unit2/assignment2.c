#include <stdio.h>

int comms( float commision, float rate, int value)
{
    int total = 0;
    total += (commision + rate * value);
    return total; 
}


int main()
{
    float commission, value;
    printf("Enter value of trade: ");
    scanf("%f", &value);
    if (value < 2500.00f){
        commission = comms(30.00f, .017f, value);
    } else if (value < 6250.00f) {
        commission = comms(56.00f, .0066f, value);
    } else if (value < 20000.00f){
        commission = comms(76.00f, .0034f, value);
    } else if (value < 50000.00f) {
        commission = comms(100.00f, .0022f, value);
    } else if (value < 500000.00f) {
        commission = comms( 155.00f, .0011f, value);
    } else {
        commission = comms( 255.00f, .0009f, value);
    }
    printf("Commission: $%.2f\n", commission);
    return(0);
}   
