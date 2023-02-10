#include <stdio.h>
#include <string.h>

void censor(char st[]);

int main(void) {
    char line[] = "Love fool";
    char st_censor[100] = "", temp[50];
    int i, j, n;
    
    n = strlen(line);
    
    for (i = 0; i < n; i++) {
        for (j = 0; i < n && line[i] != ' '; ++i, ++j) {
            temp[j] = line[i];
        }
        temp[j] = '\0';
        censor(temp);
        strcat(st_censor, temp);
        strcat(st_censor, " ");
    }
    printf("Original - %s\n", line);
    printf("Censored - %s\n", st_censor);
    return 0;
}


void censor(char st[]) {
    int i;
    int len = strlen(st);
    for (i = 0; i < len - 2; i++) {
        if (st[i] == 'f' && st[i + 1] == 'o' && st[i + 2] == 'o') {
            st[i] = 'x';
            st[i + 1] = 'x';
            st[i + 2] = 'x';
        }
    }
}