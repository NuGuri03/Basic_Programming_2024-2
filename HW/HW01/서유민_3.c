#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double num;
	scanf("%lf", &num);

	
	printf((round(num) == (int)num) ? "반올림해도 일의 자리 숫자는 그대로입니다." : "반올림하면 일의 자리 숫자가 커집니다.");
}