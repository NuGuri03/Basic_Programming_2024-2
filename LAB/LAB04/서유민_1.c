#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nums[3];

	for (int i = 0; i < 3; i++) {
		printf("����%d �Է� : ", i + 1);
		scanf("%d", &nums[i]);
	}
	int max = nums[0];
	for (int i = 0; i < 2; i++) {
		if (max < nums[i + 1]) {
			max = nums[i + 1];
		}
	}

	printf("�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�. ", max);
	return 0;
}