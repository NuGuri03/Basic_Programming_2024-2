#include <stdio.h>
#include <stdlib.h>

int sum_row(int *matrix_row) {
    int sum = 0;
    for (int j = 0; j < 5; j++) {
        sum += matrix_row[j]; 
    }
    return sum;
}

void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void bubble_sort_row(int *matrix_row) {
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j + 1 < i; j++) {
            if (matrix_row[j] > matrix_row[j + 1]) swap(&matrix_row[j], &matrix_row[j + 1]);
        }
    }
}

void bubble_sort_sum(int **matrix) {
    int sum_arr[5] = { 0 }; 
    for (int i = 0; i < 5; i++) {
        sum_arr[i] = sum_row(matrix[i]);
    }

    for (int i = 5; i > 0; i--) {
        for (int j = 0; j + 1 < i; j++) {
            if (sum_arr[j] > sum_arr[j+1]) {
                swap(&sum_arr[j], &sum_arr[j+1]);
                int* temp = matrix[j];
                matrix[j] = matrix[j + 1];
                matrix[j + 1] = temp;
            }
        }
    }
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

    for (int i = 0; i < 5; i++) {
        bubble_sort_row(matrix[i]);
    }
    for (int i = 0; i < 5; i++) {
        bubble_sort_sum(matrix);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("(total %d)\n", sum_row(matrix[i]));
    }
}