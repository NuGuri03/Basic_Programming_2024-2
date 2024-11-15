#include <stdio.h>

void frqtest(int arr[20]) {
    int num_list[10] = {0};
    for (int i = 0; i < 20; i++) {
        num_list[arr[i]]++;
    }

    int max_num = 0;
    int max_count = num_list[0];
    for (int i = 0; i < 10; i++) {
        if (max_count < num_list[i]) {
            max_num = i;
            max_count = num_list[i];
        }
    }
    printf("0 ~ 9 중  가장 많이 나온 수는 %d이고, %d번 나왔습니다.\n", max_num, max_count);
}

int main() {
    printf("0에서 9까지의 정수를 입력하시오.\n");
    int nums[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &nums[i]);
    }
    
    frqtest(nums);
}