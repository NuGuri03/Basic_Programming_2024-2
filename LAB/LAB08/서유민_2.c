#include <stdio.h>
#include <stdlib.h>

void vertical_Bingo(int** matrix, int *bingo) {
    for (int i = 0; i < 5; i++) {
        int dup = 1;
        for (int j = 0; j < 4; j++) {
            if (matrix[j][i] != matrix[j + 1][i]) {
                dup = 0;
                break;
            }
        }
        if (dup == 1) (*bingo)++;
    }
}

void horizontal_Bingo(int** matrix, int *bingo) {
    for (int i = 0; i < 5; i++) {
        int dup = 1;
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] != matrix[i][j + 1]) {
                dup = 0;
                break;
            }
        }
        if (dup == 1) (*bingo)++; 
    }
}

void diagonal_Bingo(int** matrix, int *bingo) {
    int dup = 1;
    for (int i = 0; i < 4; i++) {
        if (matrix[i][i] != matrix[i + 1][i + 1]) {
            dup = 0;
            break;
        }
    }
    if (dup == 1) (*bingo)++;
}

int main() {
    int **matrix = (int**)calloc(5, sizeof(int*));
    printf("이차원 배열 입력 :\n");
    for (int i = 0; i < 5; i++) {
        matrix[i] = (int*)calloc(5, sizeof(int));
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int bingo = 0;
    horizontal_Bingo(matrix, &bingo);
    vertical_Bingo(matrix, &bingo);
    diagonal_Bingo(matrix, &bingo);

    printf(" Total %d Bingo\n", bingo);
}