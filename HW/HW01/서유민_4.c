#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);
    
    int x = num ^ 63;
    printf("������ ����� %d�Դϴ�.", x);
    return 0;
}
