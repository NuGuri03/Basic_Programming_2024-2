#include <stdio.h>

int main() {
    char str[100];
    printf("입력 : ");
    scanf("%100s", str);

    printf("출력 : ");
    int x = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) x++;
        else {
            printf("%d", x);
            x = 1;
        }
    }
}