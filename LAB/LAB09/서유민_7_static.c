#include <stdio.h>


static int global = 5000;

void print_static() {
    printf("정적 전역 변수 : global = %d\n", global++);
}