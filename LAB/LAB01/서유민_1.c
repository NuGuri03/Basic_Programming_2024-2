#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main() {
	int width = 5;
	int length = 7;
	int area = width * length;

	printf("가로가 %d이고 세로가 %d인 사각형 넓이는 %d 입니다.\n", width, length, area);
	return 0;
}