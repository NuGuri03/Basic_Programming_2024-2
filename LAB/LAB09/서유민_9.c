#include <stdio.h>

void swap(int *x, int *y) {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int main() {
    int x, y;
    printf("첫 번째 숫자를 입력하세요. -> ");
    scanf("%d", &x);

    printf("두 번째 숫자를 입력하세요. -> ");
    scanf("%d", &y);
    
    swap(&x, &y);
    printf("첫 번쨰는 숫자는 %d이고 두 번째 숫자는 %d입니다.\n", x, y);
}