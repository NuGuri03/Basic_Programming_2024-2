#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float func(float num) {
	float result = num * 3.3058;
	return result;
}

int main() {
	float area;
	printf("������ ������ �Է��ϼ���.<�Ҽ�> >> ");
	scanf("%f", &area);

	printf("%.3f ���� %.6f ������ �Դϴ�.", area, func(area));
	return 0;
}