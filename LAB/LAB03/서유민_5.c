#define _CRT_SECURE_NO_WARNINGS
#define SQ2(x) ((x)*(x))
#define SQ4(x) (SQ2(x) * SQ2(x))
#include <stdio.h>

int main() {
	int x = 3;

	printf("%d의 네제곱은 %d입니다\n", x, SQ4(x));
}