#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money;
	printf("�ݾ��� �Է��ϼ��� : ");
	scanf("%d", &money);
	int arr[5];

	arr[0] = money / 50000;
	money = money % 50000;
	
	arr[1] = money / 10000;
	money = money % 10000;

	arr[2] = money / 1000;
	money = money % 1000;

	arr[3] = money / 100;
	money = money % 100;

	arr[4] = money / 10;
	money = money % 10;

	printf("�������� %d��\n������ %d��\nõ���� %d��\n���¥�� %d��\n�ʿ�¥�� %d��", arr[0], arr[1], arr[2], arr[3], arr[4]);
}