#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int sum = a + b;
	float average = (float)sum / 2;

	printf("��   : %d + %d = %d\n", a, b, sum);
	printf("��� : %d / %d = %f",a,b, average);
}