#include <stdio.h>

static int global_num = 0;

void function() {
    global_num++;
    static int count = 0;
    count++;
    printf("함수의 %d번째 출력입니다.\n", global_num);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("실행 횟수 출력 : %d\n", n);
    static int number = 0;
    for (int i = 0; i < n; i++) {
        function();
        number++;
    }
    printf("전역 변수 출력 : %d\n", global_num);
    printf("정적 지역 변수 출력 : %d\n", number);
}