#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a, int b) {
	int c = a;
	a = b;
	b = c;
	printf("swap ��� : %d, %d", a, b);
}

int main() {
	printf("�ΰ��� ���ڸ� �Է��ϼ��� : ");
	int a, b;
	scanf("%d, %d", &a, &b);

	swap(a, b);
}