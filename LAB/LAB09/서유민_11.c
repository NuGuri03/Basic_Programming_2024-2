#include <stdio.h>

void cross_product(float matr1[2][3], float matr2[3][2], float result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            float sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += matr1[i][k] * matr2[k][j];
            }
            result[i][j] = sum;
        }
    }
}

int main() {
    float matrix1[2][3] = {
        {4.2, 4.3, 3.8},
        {3.7, 1.5, 0.7}
    };
    float matrix2[3][2] = {
        {5.2, 2.1},
        {3.2, 1.4},
        {1.5, 3.6}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%6.2f ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%6.2f ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    float result[2][2] = {0};
    cross_product(matrix1, matrix2, result);
    printf("다음은 위 두 행렬의 곱 결과입니다.\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%6.2f ", result[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}