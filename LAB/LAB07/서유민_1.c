#include <stdio.h>

void swap(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y; 
}

int main() {
    printf("입력 : ");
    int x, y;
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("swap 결과 : %d %d\n", x, y);
}