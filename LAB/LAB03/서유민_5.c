#define _CRT_SECURE_NO_WARNINGS
#define SQ2(x) ((x)*(x))
#define SQ4(x) (SQ2(x) * SQ2(x))
#include <stdio.h>

int main() {
	int x = 3;

	printf("%d�� �������� %d�Դϴ�\n", x, SQ4(x));
}