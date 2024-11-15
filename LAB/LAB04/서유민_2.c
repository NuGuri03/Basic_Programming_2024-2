#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	float height, weight;

	printf("몸무게 입력 : ");
	scanf("%f", &weight);
	printf("키 입력 : ");
	scanf("%f", &height);

	char state[5];
	strcpy(state, weight <= (height - 100) * 0.9 ? "정상" : "비만");
	
	printf("당신의 키와 몸무게는 %.2fcm와 %.2fkg으로 %s입니다.", height, weight, state);

}