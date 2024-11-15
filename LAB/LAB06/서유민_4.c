#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    printf("시작 문자 입력 : ");
    scanf("%c", &ch);


    for (int i = 0; i < 'z' - ch + 1; i++) {
        for (int j = 0; j < 'z' - ch - i; j++) {
            printf(" ");
        }
        for (int j = 'z' - ch - i; j <= 'z' - ch; j++) {
            printf("%c", j + ch);
        }
        printf("\n");
    }
}