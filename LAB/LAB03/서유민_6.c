#include <stdio.h>

int main() {
	int year = 1;
	const year2sec = 365 * 24 * 60 * 60;

	printf("%d년을 초로 환산하면 %d초 입니다.", year, year2sec);
}
