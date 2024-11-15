#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    if (a > b) {
        printf("더한 결과 값 : %d + %d = %d\n", a, b, a+b);
    }
    else {
        printf("곱한 결과 값 : %d * %d = %d\n", a, b, a*b);
    }
    return 0;
}