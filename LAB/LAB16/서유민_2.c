#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person{
    char name[20];
    int age;
}person;

typedef struct professor{
    person p;
    char major[20];
}professor;

typedef struct student{
    person p;
    int id;
    char major[20];
    professor *pf;
} student;

void connection(student *s, professor *p) {
    if (strcmp(s->major, p->major) == 0) {
        s->pf = p;
    }
}

int main() {
    professor *pf = (professor*)malloc(2 * sizeof(professor) * 2);   
    student *st = (student*)malloc(sizeof(student) * 2);

    for (int i = 0; i < 2; i++) {
        printf("학생%d의 정보를 입력하시오.\n", i + 1);
        printf("이름 : ");
        scanf("%s", st[i].p.name);
        printf("나이 : ");
        scanf("%d", &st[i].p.age);
        printf("학번 : ");
        scanf("%d", &st[i].id);
        printf("전공 : ");
        scanf("%s", st[i].major);
        printf("\n");
    }
    for (int i = 0; i < 2; i++) {
        printf("교수%d의 정보를 입력하시오.\n", i + 1);
        printf("이름 : ");
        scanf("%s", pf[i].p.name);
        printf("나이 : ");
        scanf("%d", &pf[i].p.age);
        printf("전공 : ");
        scanf("%s", pf[i].major);
        printf("\n");
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            connection(&st[i], &pf[j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("%s / %d세 / %d / %s / 지도교수(%s)\n", st[i].p.name, st[i].p.age, st[i].id, st[i].major, st[i].pf->p.name);
    }
}