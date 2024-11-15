#include <stdio.h>

int func(int hour, int minute) {
	int second = hour * 60 * 60 + minute * 60;
	return second;
}

int main() {
	int hour = 5;
	int minute = 15;
	printf("%d시간 %d분은 %d초 입니다.\n", hour, minute, func(hour, minute));
	return 0;
}