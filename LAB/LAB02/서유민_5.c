#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float mile2km(int x) {
	float result;
	result = x * 1.6093;
	return result;
}

int main() {
	int v;
	printf("�ӵ��� ���Ϸ� �Է��ϼ��� : ");
	scanf("%d", &v);
	printf("%d������ %.2fų�ι��� �Դϴ�.", v, mile2km(v));
	return 0;
}