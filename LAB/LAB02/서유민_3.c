#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float mile2km = 1.6093;
	int mile;
	printf("속도를 마일로 입력하세요 : ");
	scanf("%d", &mile);
	float km = mile * mile2km;

	printf("%d마일은 %.2f킬로미터입니다.", mile, km);

	return 0;
}