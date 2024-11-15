#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    
    printf("문자열을 입력하세요 : ");
    while (scanf("%c", &ch), ch != '\n') count++;
    printf("문자열의 길이는 %d입니다.\n", count);
}