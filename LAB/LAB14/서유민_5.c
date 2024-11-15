#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *f, *o;
    f = fopen(argv[1], "r");
    o = fopen(argv[2], "a");

    char line[256];
    int i = 0;
    while(fgets(line, 256, f) != NULL) {
        if (i == 0) fprintf(o, "%c", '\n');
        fputs(line, o);
        i++;
    }
    fclose(f);
    fclose(o);

    return 0;
} 