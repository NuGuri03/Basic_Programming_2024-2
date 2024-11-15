#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("다음 두 행렬의 합과 차를 구하는 프로그램입니다.\n");
    printf("------------------      ------------------\n");
    int matrix1[4][3] = {{35, 28 , 73},{25, 32, 69}, {97, 56, 23}, {45, 97, 15}};
    int matrix2[4][3] = {{125, 28 , 56},{34, 32, 69}, {57, 56, 59}, {45, 33, 15}};


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (j < 3) printf("| %3d ", matrix1[i][j]);
            else {
                if (j == 3) printf("|\t");
                printf("| %3d ", matrix2[i][j-3]);
            }
        }
        printf("|\n");
    }
    printf("------------------      ------------------\n");
    printf("\n");


    printf("위의 두 행렬의 합의 결과 값입니다.\n");
    printf("------------------\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %3d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("|\n");
    }
    printf("------------------\n");

    printf("위의 두 행렬의 차의 결과 값입니다.\n");
    printf("------------------\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %3d ", matrix1[i][j] - matrix2[i][j]);
        }
        printf("|\n");
    }
    printf("------------------\n");
}