#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float mile2km(int x) {
	float result;
	result = x * 1.6093;
	return result;
}

int main() {
	int v;
	printf("속도를 마일로 입력하세요 : ");
	scanf("%d", &v);
	printf("%d마일은 %.2f킬로미터 입니다.", v, mile2km(v));
	return 0;
}