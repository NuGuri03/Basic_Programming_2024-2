#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch;
	printf("���ĺ� �ҹ��� �Է� : ");
	scanf("%c", &ch);

	printf("�Է��� ���ĺ��� �ҹ��� %c�� �빮�ڴ� %c", ch, ch -32);
}