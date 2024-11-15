#include <stdio.h>

void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main() {
    int n;
    int A[50];
    int P[50] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j + 1 <= i; j++) {
            if (A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
            }
        }
    }

    
}