#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("ȭ���µ��� �Է��ϸ� �����µ��� ��ȯ�մϴ�.\nȭ���µ��� �Է�: ");
	float T_F;
	scanf("%f", &T_F);
	float T_C = (5 / 9)*(T_F - 32);
	printf("%f�� ȭ���µ��� ������ ��ȯ�ϸ� %f�Դϴ�.", T_F, T_C);
}