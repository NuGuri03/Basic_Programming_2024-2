#include <stdio.h>

void func(int matrix[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = matrix[i][j] * 10 + 5;
        }
    }
}

int main() {
    int matrix[3][4] = {
        {5, 8, 9, 3},
        {20, 5, 23, 7},
        {30, 42, 4, 6}
    };

    printf("원 행렬 값 : \n");
    printf("-------------------------------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("|%4d ", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("-------------------------------\n\n");

    func(matrix);
    printf("계산 후 행렬 값 : \n");
    printf("-------------------------------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("|%4d ", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("-------------------------------\n");
}