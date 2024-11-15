#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nums[3];

	for (int i = 0; i < 3; i++) {
		printf("정수%d 입력 : ", i + 1);
		scanf("%d", &nums[i]);
	}
	int max = nums[0];
	for (int i = 0; i < 2; i++) {
		if (max < nums[i + 1]) {
			max = nums[i + 1];
		}
	}

	printf("입력한 정수 중에서 가장 큰 수는 %d입니다. ", max);
	return 0;
}