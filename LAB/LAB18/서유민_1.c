#include <stdio.h>

int main() {
    FILE *f = fopen("input_1.txt", "r");
    FILE *o = fopen("output_1.txt", "w");

    int n, a, b;
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d %d", &a, &b);
        fprintf(o, "%d\n", a + b);
        printf("%d + %d = %d\n", a, b, a + b);
    }
}