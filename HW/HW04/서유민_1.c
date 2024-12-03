#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char st_num[11];
    char name[20];
    int korean;
    int english;
    int math;
}student;

int main() {
    FILE *f = fopen("input.txt", "r");
    int cnt_line;
    fscanf(f, "%d", &cnt_line);

    student *students = (student*)malloc(cnt_line * sizeof(student));
    for (int i = 0; i < cnt_line; i++) {
        fscanf(f, "%s %s %d %d %d", students[i].st_num, students[i].name, &students[i].korean, &students[i].english, &students[i].math);
    }
    fclose(f);

    FILE *o = fopen("output.txt", "w");
    for (int i = 0; i < cnt_line; i++) {
        fprintf(o, "%s %8s %d %d %d\n", students[i].st_num, students[i].name, students[i].math, students[i].korean, students[i].english);
    }
    fclose(o);
    free(students);
}