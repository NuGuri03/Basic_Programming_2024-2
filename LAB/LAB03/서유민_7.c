#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("화씨온도를 입력하면 섭씨온도로 변환합니다.\n화씨온도를 입력: ");
	float T_F;
	scanf("%f", &T_F);
	float T_C = (5 / 9)*(T_F - 32);
	printf("%f의 화씨온도를 섭씨로 변환하면 %f입니다.", T_F, T_C);
}