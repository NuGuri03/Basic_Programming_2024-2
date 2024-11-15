#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a, int b) {
	int c = a;
	a = b;
	b = c;
	printf("swap 결과 : %d, %d", a, b);
}

int main() {
	printf("두개의 숫자를 입력하세요 : ");
	int a, b;
	scanf("%d, %d", &a, &b);

	swap(a, b);
}