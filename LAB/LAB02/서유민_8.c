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
	printf("숫자를 입력해주세요 : ");
	int num;
	scanf("%d", &num);
	printf("%d 의 제곱 : %d\n", num, square(num));
	printf("%d 의 세제곱 : %d\n", num, cubic(num));
	printf("%d 의 다섯제곱 : %d\n", num, fifthPower(num));
	
	return 0;
}