#include <stdio.h>

int func(int hour, int minute) {
	int second = hour * 60 * 60 + minute * 60;
	return second;
}

int main() {
	int hour = 5;
	int minute = 15;
	printf("%d�ð� %d���� %d�� �Դϴ�.\n", hour, minute, func(hour, minute));
	return 0;
}