#include <stdio.h>

float cm_to_inch(int num) {
	float result = num / 2.54;
	return result;
}

int main() {
	int input;
	printf("���̸� ��Ƽ���ͷ� �Է��ϼ���. >> ");
	scanf_s("%d", &input);

	printf("%d ��Ƽ���ʹ� %.6f��ġ�Դϴ�.", input, cm_to_inch(input));
	return 0;
}