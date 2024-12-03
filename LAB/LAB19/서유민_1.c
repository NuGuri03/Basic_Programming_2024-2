#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *o = fopen(argv[1], "w");

    for (int i = argc - 1; i > 1; i--) {
        fprintf(o, "%s\n",argv[i]);
    }
}