#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_num[10];
    int random_num_cnt[5] = {0};

    srand(time(NULL));
    int num;
    for (int i = 0; i < 10; i++) {
        num = rand() % 25;
        random_num[i] = num;
        random_num_cnt[num / 5] += 1;
    }

    int *arr[5];
    for (int i = 0; i < 5; i++) {
        if (random_num_cnt[i] == 0) {
            arr[i] = (int*)malloc(sizeof(int));
            arr[i][0] = -1;
            continue;
        }
        
        arr[i] = (int*)malloc(random_num_cnt[i] * sizeof(int));
        int index = 0;
        for (int j = 0; j < random_num_cnt[i]; j++) {
            while (random_num[index] / 5 != i) index++;
            arr[i][j] = random_num[index];
        }
    }

    for (int i = 0; i < 5; i++) {
        if (random_num_cnt[i] == 0) {
            printf("arr[%d] = -1\n", i);
        }
        else {
            printf("arr[%d] =",i);
            int sum = 0;
            for (int j = 0; j < random_num_cnt[i]; j++) {
                sum += arr[i][j];
                if (j != random_num_cnt[i] - 1) printf(" %d +", arr[i][j]);
                else printf(" %d = ", arr[i][j]);
            }
            printf("%d\n", sum);
        }
    }
}