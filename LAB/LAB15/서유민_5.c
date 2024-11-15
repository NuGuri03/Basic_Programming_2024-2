#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 1;
    int **matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        if (i % 2 == 0) {
            for (int j = 0; j< n; j++) {
                matrix[i][j] = num++;
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = num++;
            }
        }
        
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< n; j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    
}