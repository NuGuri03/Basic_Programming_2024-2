#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	float height, weight;

	printf("������ �Է� : ");
	scanf("%f", &weight);
	printf("Ű �Է� : ");
	scanf("%f", &height);

	char state[5];
	strcpy(state, weight <= (height - 100) * 0.9 ? "����" : "��");
	
	printf("����� Ű�� �����Դ� %.2fcm�� %.2fkg���� %s�Դϴ�.", height, weight, state);

}