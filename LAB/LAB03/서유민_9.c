#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("�ﰢ���� ������ ���մϴ�.\n");
	printf("�ﰢ���� �غ� �Է� : ");
	float bottom;
	scanf("%f", &bottom);
	printf("�ﰢ���� ���� �Է�: ");
	float height;
	scanf("%f", &height);

	float s = bottom * height / 2;
	printf("\n�Է��� �غ��� %.2f �Դϴ�. \n�Է��� ���̴� %.2f�Դϴ�.\n�ﰢ���� ������ %.2f �Դϴ�.",bottom, height, s);
}