#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch;
	printf("알파벳 소문자 입력 : ");
	scanf("%c", &ch);

	printf("입력한 알파벳의 소문자 %c의 대문자는 %c", ch, ch -32);
}