#include <stdio.h>

int main() {
    int x;
    printf("점수 입력 : ");
    scanf("%d", &x);
    printf("입력한 점수 : %d, 학점 : ", x);

    if (x < 60) printf("F\n");
    else {
        int a = x / 10 - 6;
        char b = x % 10 >= 5 ? '+':'0';
        printf("%c%c\n", 'D' - a, b);
    }
}