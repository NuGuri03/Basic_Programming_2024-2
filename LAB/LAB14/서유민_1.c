#include <stdio.h>

int main() {
    FILE *f, *o;
    int line;
    char name[100];
    float a, b;

    f = fopen("tst.txt", "r");
    o = fopen("output.txt", "w");
    while(fscanf(f, "%d %s %f %f", &line, name, &a, &b) == 4) {
        fprintf(o, "%d %s %.1f %.1f %.1f\n", line, name, a, b, a + b);
    }
    fclose(f);
}