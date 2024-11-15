#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("숫자를 입력하세요 : ");
	int num;
	scanf("%d", &num);
	for (int i = 1; i < 10; i++) {
		if (i != 9) {
			printf("  %d x %d =  %d\n", num, i, num * i);
		}
		else {
			printf("  %d x %d =  %d", num, i, num * i);
		}
	}
}