#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    
    int x = num ^ 63;
    printf("연산의 결과는 %d입니다.", x);
    return 0;
}
