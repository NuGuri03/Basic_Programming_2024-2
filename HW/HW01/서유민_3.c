#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double num;
	scanf("%lf", &num);

	
	printf((round(num) == (int)num) ? "�ݿø��ص� ���� �ڸ� ���ڴ� �״���Դϴ�." : "�ݿø��ϸ� ���� �ڸ� ���ڰ� Ŀ���ϴ�.");
}