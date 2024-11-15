#include <stdio.h>
#include <stdlib.h>

void copyarray(double *source, double *target, int size) {
    target = (double*)malloc(sizeof(double)* size);
    for (int i = 0; i < size; i++) {
        target[i] = source[i];
    }
}

int main() {
    double arr[5] = {3.12, 5.14, 7.25, 7.48, 5.91};
    printf("원 행렬 값:\n");
    for (int i = 0; i < 5; i++) {
        printf("    %4.2lf  ", arr[i]);
    }
    printf("\n\n");

    double *target;
    copyarray(arr, target, 5);
    printf("함수 copyarrary() 호출 후 target 행렬 값:\n");
    for (int i = 0; i < 5; i++) {
        printf("    %4.2lf  ", arr[i]);
    }
    printf("\n");

}