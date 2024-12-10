#include <stdio.h>
#include <stdlib.h>

typedef struct stuff{
    int weight, value;
}stuff;

int R_maxV = 0;

void sol_recursive(stuff* arr, int *node, int n, int k, int sumW, int sumV) {
    if (R_maxV < sumV) {
        R_maxV = sumV;
    }
    for (int i = 0; i < n; i++) {
        if (sumW + arr[i].weight > k || node[i] == 1) continue;
        node[i] = 1;
        sumW += arr[i].weight;
        sumV += arr[i].value;
        sol_recursive(arr, node, n, k, sumW, sumV);
        sumW -= arr[i].weight;
        sumV -= arr[i].value;
        node[i] = 0;
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *node = (int*)malloc(n * sizeof(int));
    stuff *arr = (stuff*)malloc(n * sizeof(stuff));
    for (int i = 0; i < n; i++) {
        node[i] = 0;
        scanf("%d %d", &arr[i].weight, &arr[i].value);
    }
    sol_recursive(arr, node, n, k, 0, 0);

    printf("Result by Recursive = %d\n", R_maxV);
    //printf("Result by DP = %d\n", sol_DP(arr, n, k));     
}