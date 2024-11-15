#include <stdio.h>

int main() {
    int num;
    printf("정수 입력 : ");
    scanf("%d", &num);

    int abs_num;
    if (num >= 0) {
        abs_num = num;
    }
    else {
        abs_num = num * (-1);
    }
    printf("입력한 수 %d의 절대값은 %d입니다.\n", num, abs_num);
}