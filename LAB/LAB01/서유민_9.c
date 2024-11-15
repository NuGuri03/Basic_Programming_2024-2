#include <stdio.h>

float liter_to_gallon(float num) {
	float result = num / 3.785;
	return result;
}

int main() {
	float liter;
	printf("부피인 리터를 입력하세요.<소수> >> ");
	scanf_s("%f", &liter);
	
	printf("%.6f 리터는 %.6f 갤론 입니다.", liter, liter_to_gallon(liter));
	return 0;
}