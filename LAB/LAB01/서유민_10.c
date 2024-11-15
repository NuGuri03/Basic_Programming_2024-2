#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float func(float num) {
	float result = num * 3.3058;
	return result;
}

int main() {
	float area;
	printf("면적을 평으로 입력하세요.<소수> >> ");
	scanf("%f", &area);

	printf("%.3f 평은 %.6f 평방미터 입니다.", area, func(area));
	return 0;
}