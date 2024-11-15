#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("알파벳 소문자를 입력하세요 : ");
	char ch = getchar();

	ch = (ch + 3) <= 122 ? ch + 3 : ch + 3 - 26;
	printf("3글자 뒤의 알파벳은 %c", ch);
}