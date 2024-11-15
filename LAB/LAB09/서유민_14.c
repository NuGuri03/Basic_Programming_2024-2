#include <stdio.h>

int main() {
    double arr[5] = {3.12, 5.14, 7.25, 7.48, 5.91};
    printf("source 원 행렬 값:\n");
    double max = 0;
    double min = 10000;
    for (int i = 0; i < 5; i++) {
        printf("    %4.2lf  ", arr[i]);
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    printf("\n\n");
    printf("최대값과 최소값의 차이는 %lf이다.\n", max - min);
}