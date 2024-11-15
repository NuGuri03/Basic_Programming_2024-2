#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("임의의 정수 입력 : ");
	scanf("%d", &num);

	int x = num & (1 << 16) - 1;

	printf("값 %d를 하위 2바이트의 값을 16진수로 출력 : %x", num, x);
}