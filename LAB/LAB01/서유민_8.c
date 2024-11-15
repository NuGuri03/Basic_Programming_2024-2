#include <stdio.h>

float cm_to_inch(int num) {
	float result = num / 2.54;
	return result;
}

int main() {
	int input;
	printf("길이를 센티미터로 입력하세요. >> ");
	scanf_s("%d", &input);

	printf("%d 센티미터는 %.6f인치입니다.", input, cm_to_inch(input));
	return 0;
}