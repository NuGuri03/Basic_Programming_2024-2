#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("한 줄의 문장을 입력하세요. ->\n");
    gets_s(str, 100);

    printf("\n입력한 각각의 단어를 반대로 출력합니다. ->\n");
    char *ptr;
    char * delim = " ";
    ptr = strtok(str, delim);
    while (ptr != NULL) {
        for (int i = strlen(ptr) - 1; i >= 0; i--) {
            printf("%c", ptr[i]);
        }
        printf(" ");
        ptr = strtok(NULL, delim);
    }
    printf("\n");
}