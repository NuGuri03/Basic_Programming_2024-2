#include <stdio.h>

float liter_to_gallon(float num) {
	float result = num / 3.785;
	return result;
}

int main() {
	float liter;
	printf("������ ���͸� �Է��ϼ���.<�Ҽ�> >> ");
	scanf_s("%f", &liter);
	
	printf("%.6f ���ʹ� %.6f ���� �Դϴ�.", liter, liter_to_gallon(liter));
	return 0;
}