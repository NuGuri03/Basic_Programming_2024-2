#include <stdio.h>

int main() {
	float yard, cm;
	yard = 150;
	cm = yard * 91.44;

	printf("거리 %f야드는 센티미터로 %.6f센티미터입니다.\n", yard, cm);
	return 0;
}