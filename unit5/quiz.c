#include<stdio.h>
#include <string.h>

int main() {
    char myName[50] = "Flaherty";
    int i, len;

    len = strlen(myName);
    for (i = 0; i < len; i++) {
        putchar(myName[i]);
        putchar('\n');
    }
}