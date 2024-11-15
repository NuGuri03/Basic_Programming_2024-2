#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check_student(char* name, const char* students[5]) {
    int state = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(name, students[i]) == 0) {
            state = 1;
            printf("해당 학생의 학번은 %d입니다.\n", 2024000000 + i);
            break;
        } 
    }
    if (state == 0)
        printf("해당 학생은 목록에 없습니다.\n");   
}

int main() {
    const char* students[5]  = {"STUDENTA","STUDENTB","STUDENTC","STUDENTE","STUDENTF"};
    
    char name[50];
    printf("학생 이름을 입력하세요 : ");
    scanf("%49s", name);

    check_student(name, students);
}