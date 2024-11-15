#include <stdio.h>

static int global = 0;

void fun() {
    printf("함수 fun()을 %d번 호출하고 있습니다.\n", ++global);
}

int main() {
    for (int i = 0; i < 6; i++) {
        fun();
    }
    printf("함수 func()가 총 %d번 호출되었습니다.\n", global);
}