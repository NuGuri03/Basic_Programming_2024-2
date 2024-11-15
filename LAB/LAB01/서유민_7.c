#include <stdio.h>
#include <stdlib.h>

int main() {
	int* nums = (int*)malloc(2 * sizeof(int));
	for (int i = 0; i < 2; i++) {
		printf("정수%d입력? ", i + 1);
		scanf_s("%d", (nums + i));
	}
	printf("%d * %d = %d\n", *nums, *(nums + 1), *nums * *(nums+1));
	printf("%d + %d = %d", *nums, *(nums + 1), *nums + *(nums + 1));
	free(nums);
	return 0;
}