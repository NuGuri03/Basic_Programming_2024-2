#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char ch;
    printf("������ ���� �Է� : ");
    scanf("%c", &ch);

    char result = (ch >= 96 && ch < 122) || (ch >= 65 && ch <= 'Z') ? (ch >= 96 && ch <= 122 ? ch - 32 : ch + 32) : '?';

    printf("��ȯ ��� : %c", result);

}
