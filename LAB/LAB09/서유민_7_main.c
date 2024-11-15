#include <stdio.h>
int global = 100;

void print_static();

int main() {
    printf("전역 변수 : global = %d\n", global++);
    print_static();
    printf("전역 변수 : global = %d\n", global);
    print_static();
}