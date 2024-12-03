#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
    char name[20];
    char phone[15];
}person;

int main() {
    person persons[10];

    char buffer[20];
    int cnt = 0;
    while (cnt < 10) {
        scanf("%s", buffer);
        if (strcmp(buffer, "exit") == 0) break;
        strcpy(persons[cnt].name, buffer);
        scanf("%s", persons[cnt].phone);
        cnt++;
    }

    FILE *d = fopen("data.txt", "w");
    for (int i = 0; i < cnt; i++) {
        fprintf(d ,"%s %s\n", persons[i].name, persons[i].phone);
    }
    fclose(d);
}