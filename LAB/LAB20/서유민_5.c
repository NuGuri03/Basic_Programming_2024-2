#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *d = fopen("data.txt", "r");

    int cnt_line = 0;
    fscanf(d, "%d", &cnt_line);
    
    char** buffer = (char**)malloc(cnt_line * sizeof(char*));
    for (int i = 0; i < cnt_line; i++) {
        buffer[i] = (char*)malloc(100 * sizeof(char));
        fscanf(d, "%s", buffer[i]);
    }

    int n;
    fscanf(d, "%d", &n);
    fclose(d);

    FILE *o = fopen("data.txt", "w");

    for (int i = 0; i < cnt_line; i++) {
        if (i + 1 == n) continue;
        fprintf(o, "%s\n", buffer[i]);
    }
}