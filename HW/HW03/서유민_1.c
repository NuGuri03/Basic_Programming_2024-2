#include <stdio.h>
#include <stdlib.h>

char** create_Z(int n) {
    char** result = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        result[i] = (char*)malloc(n * sizeof(char));
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1) {
                result[i][j] = '*';
            }
            else {
                if (i + j == n - 1) result[i][j] = '*';
                else result[i][j] = ' ';
            }
        }
    }
    return result;
}

void print_Z(int n) {
    char** Z = create_Z(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", Z[i][j]);
        }
        printf("\n");
    }
    free(Z);
}

int main() {
    int n;
    printf(" 입력 : ");
    scanf("%d", &n);

    print_Z(n);
}