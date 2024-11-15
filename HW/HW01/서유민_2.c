#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char num[7];
	char reversed[7];
	scanf("%s", &num);
	

	for (int i = 0; i < 6; i++) {
		reversed[i] = num[5 - i];
	}
	reversed[6] = '\0';

	printf("%s", reversed);
}