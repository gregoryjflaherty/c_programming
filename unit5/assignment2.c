#include <stdio.h>
#include <string.h>

struct Player {
    char name[100];
    int number;
    double average;
};

int main() {
    struct Player player;

    printf("Enter the players name: ");
    scanf("%s", player.name);
    printf("Enter the players number: ");
    scanf("%d", &player.number);
    printf("Enter the players batting average: ");
    scanf("%lf", &player.average);

    printf("Name: %s\nNumber: %d\nNumber: %lf\n", player.name, player.number, player.average);
    return 0;
}