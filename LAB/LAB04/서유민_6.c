#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nums[2];
	for (int i = 0; i < 2; i++) {
		printf("������ ���� �Է�%d : ", i + 1);
		scanf("%d", &nums[i]);
	}
	int x = nums[0];
	int y = nums[1];
	printf("�Է� ��, x = %d, y = %d\n", x, y);

	x ^= y;
	y ^= x;
	x ^= y;

	printf("���� ��, x = %d, y = %d\n", x, y);
}
