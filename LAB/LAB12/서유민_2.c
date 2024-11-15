#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("한 단어를 입력하세요. ->\n");
    scanf("%s", str);

    printf("\n입력한 단어를 반대로 출력합니다.\n");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}