#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("랜덤으로 숫자를 생성합니다\n");

    int cnt = 1;
    int n = rand() % 1000 + 1;
    int myNum;
    int is_found = 0;
    while (cnt <= 8) {
        printf("%d. 생성된 숫자를 예상해 주세요 : ", cnt);
        scanf("%d", &myNum);
        if (n == myNum) {
            printf("정답!\n");
            is_found = 1;
            break;
        }
        else if (n > myNum) {
            printf("UP\n");
            cnt++;
        }
        else {
            printf("DOWN\n");
            cnt++;
        }
    }
    if (is_found != 1) {
        printf("8번의 기회를 모두 사용하셨지만 정답을 맞추지 못하였습니다.\n정답은 %d 이었습니다.\n", n);
    }
}