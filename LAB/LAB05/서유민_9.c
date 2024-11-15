#include <stdio.h>

int main() {
    int num;
    printf("소수를 검사할 정수 입력 : ");
    scanf("%d", &num);
    
    int isPrime = 1;
    if (num >= 2) {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1) {
        printf("정수 %d<은>는 소수입니다.\n",num);
    }
}