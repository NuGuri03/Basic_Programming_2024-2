#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include <stdio.h>

int main() {
	printf("원의 면적과 둘레를 구합니다.\n원의 반지름 입력 : ");
	float r;
	scanf("%f", &r);

	float l = 2 * pi * r;
	float s = pi * r * r;
	printf("\n원의 면적은 %.3f 입니다.\n원의 둘레는 %.3f 입니다.", s, l);
}