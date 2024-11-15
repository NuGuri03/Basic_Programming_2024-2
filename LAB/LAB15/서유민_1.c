#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void sort_arr(int *arr) {
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j + 1 <= i; j++) {
            if (arr[j] > arr[j + 1]) swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main() {
    int *arr = (int*)malloc(10 * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    printf("정렬 전 배열 값 : -->\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort_arr(arr);
    printf("정렬 후 배열 값 : -->\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}