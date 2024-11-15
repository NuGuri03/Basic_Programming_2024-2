#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(float a, float b) {
	printf("%.3f + %.3f = %.3f\n", a, b, a + b);
}

void sub(float a, float b) {
	printf("%.3f - %.3f = %.3f\n", a, b, a - b);
}

void mult(float a, float b) {
	printf("%.3f * %.3f = %.3f\n", a, b, a * b);
}

void div(float a, float b) {
	printf("%.3f / %.3f = %.3f\n", a, b, a / b);
}

int main() {
	printf("두개의 숫자를 입력하세요 : ");
	float x, y;
	scanf("%f %f", &x, &y);

	add(x, y);
	sub(x, y);
	mult(x, y);
	div(x, y);
	return 0;
}