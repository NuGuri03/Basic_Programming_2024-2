#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("������ ���� �Է� : ");
	scanf("%d", &num);

	int x = num & (1 << 16) - 1;

	printf("�� %d�� ���� 2����Ʈ�� ���� 16������ ��� : %x", num, x);
}