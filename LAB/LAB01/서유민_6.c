#include <stdio.h>

int main() {
	int credit;
	printf("이번 학기에 수강하는 총 학점은? ");
	scanf_s("%d", &credit);
	
	printf("총 %d 학점을 듣는군요.", credit);
	return 0;
}