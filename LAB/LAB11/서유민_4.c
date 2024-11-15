#include <stdio.h>
#include <string.h>


void sort(char strings[5][100]) {
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j + 1 < i; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }
}

int main() {
    char str[5][100];

    printf("입력 : ");
    for (int i = 0; i < 5; i++) {
        fgets(str[i], 100, stdin);
    }
    
    sort(str);
    for (int i = 0; i < 5; i++) {
        printf("%s", str[i]);
    }
}