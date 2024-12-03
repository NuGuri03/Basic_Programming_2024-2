#include <stdio.h>
#include <string.h>

typedef struct person {
    char name[20];
    char phone[20];
    char adress[40];
}person;

void swap(person *p1, person *p2) {
    person temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}

void print(person *p1, person*p2) {
    printf("%26s%23s%25s\n","이름", "전화번호","주소");
    printf("%10s%20s%20s%40s\n", "사람1", p1->name, p1->phone, p1->adress);
    printf("%10s%20s%20s%40s\n", "사람2", p2->name, p2->phone, p2->adress);
}

int main() {
    FILE *f = fopen("input_3.txt", "r");
    FILE *o = fopen("output_3.txt", "w");

    person p1, p2;
    fscanf(f, "%s%s", p1.name, p1.phone);
    fgets(p1.adress, 40, f);
    strtok(p1.adress, "\n");

    fscanf(f, "%s%s", p2.name, p2.phone);
    fgets(p2.adress, 40, f);

    print(&p1, &p2);
    printf("\n");

    swap(&p1, &p2);
    print(&p1, &p2);

    fprintf(o, "%s %s %s\n", p1.name, p1.phone, p1.adress);
    fprintf(o, "%s %s %s\n", p2.name, p2.phone, p2.adress);
}