#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square(int x) {
	return x * x;
}

int cubic(int x) {
	return x * x * x;
}

int fifthPower(int x) {
	return square(x) * cubic(x);
}

int main() {
	printf("���ڸ� �Է����ּ��� : ");
	int num;
	scanf("%d", &num);
	printf("%d �� ���� : %d\n", num, square(num));
	printf("%d �� ������ : %d\n", num, cubic(num));
	printf("%d �� �ټ����� : %d\n", num, fifthPower(num));
	
	return 0;
}