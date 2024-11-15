#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("삼각형의 면적을 구합니다.\n");
	printf("삼각형의 밑변 입력 : ");
	float bottom;
	scanf("%f", &bottom);
	printf("삼각형의 높이 입력: ");
	float height;
	scanf("%f", &height);

	float s = bottom * height / 2;
	printf("\n입력한 밑변은 %.2f 입니다. \n입력한 높이는 %.2f입니다.\n삼각형의 면적은 %.2f 입니다.",bottom, height, s);
}