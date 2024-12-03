#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

void primenumber(int *arr, int size, int *primecnt, int *primenumbers) {
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 1) continue;

        int check = 1;
        for (int j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                check = 0;
                break;
            }
        }

        if (check == 1) primenumbers[(*primecnt)++] = arr[i];
    }
}

int main() {
    int num[5];
    srand(time(NULL));
    printf("난수 5개(1 ~ 20) : ");
    for (int i = 0; i < 5; i++) {
        num[i] = rand() % 20 + 1;
        printf("%d ", num[i]);
    }

    printf("\n오름차순 정렬 : ");
    qsort(num, 5, sizeof(int), comp);
    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    int primecnt = 0;
    int *primes = (int*)malloc(5 * sizeof(int));
    primenumber(num, 5, &primecnt, primes);
    for (int i = 0; i < 5; i++) {
        int check = 0;
        for (int j = 0; j < primecnt; j++) {
            if (num[i] == primes[j]) {
                check = 1;
                break;
            }
        }
        if (check == 1) printf("%d = 소수\n", num[i]);
        else printf("%d = 정수\n", num[i]);
    }

    printf("\n소수는 ");
    for (int i = 0; i < primecnt; i++) {
        printf("%d ", primes[i]);
    }
    printf("로 총 %d개 입니다.\n", primecnt);
}