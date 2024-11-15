#include <stdio.h>

int func(int ages[]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += ages[i] * 365;
	}
	return sum;
}

int main() {
	int mom_age, father_age, my_age;

	int ages[4];
	ages[0] = mom_age = 50;
	ages[1] = father_age = 50;
	ages[2] = my_age = 20;
	
	printf("우리 가족이 현재까지 살아온 일 수는 %d일입니다.\n", func(ages));
}