#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("여러 줄에 원하는 문장을 입력하세요. 입력이 다 되었으면 새로운 줄 처음에 ctrl+Z. 그리고 Enter를 입력하세요.\n\n");

    int result[100][10];
    int line = 0;
    char str[100];
    while(fgets(str, 100, stdin) != NULL) {
        int count = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (ispunct(str[i])) {
                result[line][count++] = str[i];
            }
        }
        result[line][count + 1] = '\0';
        line++;
    }

    printf("\n");
    int total_count = 0;
    for (int i = 0; i < line; i++) {
        printf("<< %d줄에 입력한 문자열에서 구두점 출력 >>\n", i + 1);
        for (int j = 0; result[i][j + 1] != '\0'; j++) {
            printf("구두점 %d : %c\n", ++total_count, result[i][j]);
        }
    }

    printf("\n구두점의 수는 모두 %d개 입니다.\n", total_count);
}