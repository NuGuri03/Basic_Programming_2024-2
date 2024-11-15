#include <stdio.h>
#include <stdlib.h>

int** make_matrix() {
    int **matrix = (int**)malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++) {
        matrix[i] = (int*)malloc(3 * sizeof(int));
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}

int** sum_matrix(int** matrix1, int**matrix2) {
   int **matrix = (int**)malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++) {
        matrix[i] = (int*)malloc(3 * sizeof(int));
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return matrix;
}

int** sub_matrix(int** matrix1, int**matrix2) {
   int **matrix = (int**)malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++) {
        matrix[i] = (int*)malloc(3 * sizeof(int));
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return matrix;
}

int** cross_product(int** matrix1, int**matrix2) {
   int **matrix = (int**)malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++) {
        matrix[i] = (int*)malloc(3 * sizeof(int));
        for (int j = 0; j < 3; j++) {
            int sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            matrix[i][j] = sum;
        }
    }
    return matrix;
}

int main() {
    printf("첫번째 행렬 입력 :\n");
    int **matrix1 = make_matrix();
    printf("두번째 행렬 입력 :\n");
    int **matrix2 = make_matrix();

    printf("행렬의 합 :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum_matrix(matrix1, matrix2)[i][j]);
        }
        printf("\n");
    }

    printf("행렬의 차 :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sub_matrix(matrix1, matrix2)[i][j]);
        }
        printf("\n");
    }

    printf("행렬의 곱 :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", cross_product(matrix1, matrix2)[i][j]);
        }
        printf("\n");
    }
}