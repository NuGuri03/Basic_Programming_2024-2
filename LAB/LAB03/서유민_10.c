#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include <stdio.h>

int main() {
	printf("���� ������ �ѷ��� ���մϴ�.\n���� ������ �Է� : ");
	float r;
	scanf("%f", &r);

	float l = 2 * pi * r;
	float s = pi * r * r;
	printf("\n���� ������ %.3f �Դϴ�.\n���� �ѷ��� %.3f �Դϴ�.", s, l);
}