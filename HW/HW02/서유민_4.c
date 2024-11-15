#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long num1;
    unsigned long long num2;

    printf("입력 : ");
    scanf("%llu %llu", &num1, &num2);
    
    printf("합 : %llu\n", num1+ num2);
    printf("차 : %llu\n", num1 - num2 >= 0 ? num1 - num2 : num2 - num1);
}