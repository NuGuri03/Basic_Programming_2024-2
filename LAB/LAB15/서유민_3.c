#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    char name[50];
    double sc1, sc2;
}person;

typedef struct list{
    person p;
    struct list *next;
}list;

int main(int argc, char *argv[]) {
    int count = 0;;
    FILE *f = fopen("input.txt", "r");
    char line[256];
    while(fgets(line, sizeof(line), f) != NULL) {
        count++;
    }
    rewind(f);

    list *a = (list*)malloc(count * sizeof(list));
    int i = 0;
    while (i < count) {
        fscanf(f, "%d %s %lf %lf", &a[i].p.num, a[i].p.name, &a[i].p.sc1, &a[i].p.sc2);
        i++;
    }

    fclose(f);

    for (int j = 0; j + 1< count; j++) {
        a[j].next = &a[j+1];
    }
    a[count - 1].next = NULL;

    for (int j = 0; j < count; j++) {
        printf("%5d %10s %5.1lf %5.1lf %5.1lf\n", a[j].p.num, a[j].p.name, a[j].p.sc1, a[j].p.sc2, a[j].p.sc1 + a[j].p.sc2);
    }
}