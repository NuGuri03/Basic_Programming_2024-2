#include <stdio.h>



int main() {
    printf("두 수를 다음과 같은 형태로 입력하세요.\n연산자는 8가지<+, -, *, /, %, &, |, ^> 중의 하나여야 합니다.\nnumber1 연산자 number2\n\n");

    int n1, n2;
    char oper;
    scanf("%d %c %d", &n1, &oper, &n2);

    printf("\n>>>>>>>>> 결과는\n%d %c %d = ",n1, oper, n2);
    if (oper == '+') {
        printf("%d", n1 + n2);
    }
    if (oper == '-') {
        printf("%d", n1 - n2);
    }
    if (oper == '*') {
        printf("%d", n1 * n2);
    }
    if (oper == '/') {
        printf("%d", n1 / n2); 
    }
    if (oper == '%') {
        printf("%d", n1 % n2);
    }
    if (oper == '&') {
        printf("%d", n1 & n2);
    }
    if (oper == '|') {
        printf("%d", n1 | n2);
    }
    if (oper == '^') {
        printf("%d", n1 ^ n2);
    }
    printf("\n");
    return 0;
}