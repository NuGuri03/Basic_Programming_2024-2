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
    FILE *o = fopen("output.txt", "w");
    char line[256];
    while(fgets(line, sizeof(line), f) != NULL) {
        count++;
    }
    rewind(f);

    list *arr = (list*)malloc(count * sizeof(list));
    int i = 0;
    while (i < count) {
        fscanf(f, "%d %s %lf %lf", &arr[i].p.num, arr[i].p.name, &arr[i].p.sc1, &arr[i].p.sc2);
        i++;
    }

    fclose(f);

    for (int j = 0; j + 1< count; j++) {
        arr[j].next = &arr[j+1];
    }
    arr[count - 1].next = NULL;

    for (int j = 0; j < count; j++) {
        printf("%5d %10s %5.1lf %5.1lf %5.1lf\n", arr[j].p.num, arr[j].p.name, arr[j].p.sc1, arr[j].p.sc2, arr[j].p.sc1 + arr[j].p.sc2);
        fprintf(o, "%5d %10s %5.1lf %5.1lf %5.1lf\n", arr[j].p.num, arr[j].p.name, arr[j].p.sc1, arr[j].p.sc2, arr[j].p.sc1 + arr[j].p.sc2);
    }
}