#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("실수를 입력하세요 : " );
	float num;
	scanf("%f", &num);

	printf("정수 부분은 %d입니다.", (int)num);
	
}