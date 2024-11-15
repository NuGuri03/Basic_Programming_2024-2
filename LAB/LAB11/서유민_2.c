#include <stdio.h>

int main() {
    char str[100];
    printf("문자열을 입력하세요 : ");
    fgets(str,100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';

        else if ('a' <= str[i] && str[i] <= 'z') str[i] = str[i] - 'a' + 'A'; 
    }

    printf("%s", str);
}