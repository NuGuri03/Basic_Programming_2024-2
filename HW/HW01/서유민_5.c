#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("���ĺ� �ҹ��ڸ� �Է��ϼ��� : ");
	char ch = getchar();

	ch = (ch + 3) <= 122 ? ch + 3 : ch + 3 - 26;
	printf("3���� ���� ���ĺ��� %c", ch);
}