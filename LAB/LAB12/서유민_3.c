#include <stdio.h>

int main() {
    char ch;
    printf("문자 하나 입력하세요 -> \n");
    scanf("%c", &ch);

    printf("\n%c의 아스키 코드 값은 십진수로 %d입니다.\n",ch, ch);
}