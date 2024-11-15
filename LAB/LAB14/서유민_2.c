#include <stdio.h>

int main(int argc, char* argv[]) {
    FILE *f, *o;
    f = fopen(argv[1], "r");
    o = fopen(argv[2], "w");

    char line[256];
    while (fgets(line, 256, f) != NULL) {
        fputs(line, o);
    }
    fclose(f);
    fclose(o);
    return 0;
}