#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float mile2km = 1.6093;
	int mile;
	printf("�ӵ��� ���Ϸ� �Է��ϼ��� : ");
	scanf("%d", &mile);
	float km = mile * mile2km;

	printf("%d������ %.2fų�ι����Դϴ�.", mile, km);

	return 0;
}