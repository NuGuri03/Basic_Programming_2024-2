#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int nums[2];
	for (int i = 0; i < 2; i++) {
		printf("������ ���� �Է�%d : ", i + 1);
		scanf("%d", &nums[i]);
	}
	int max, min;
	nums[0] >= nums[1] ? max = (nums[0], min = nums[1]) : (max = nums[1], min = nums[0]);

	printf("���� %d�̰� �������� %d�Դϴ�.", max / min, max % min);

}
