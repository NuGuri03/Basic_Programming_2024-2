#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
    char grade[3];
    int scholarship;
}student;

void function(student *x) {
    if (x->score >= 80 && x->score <= 100) {
        x->scholarship = 10000000;
        strcpy(x->grade, "A");
    }
    else if (x->score >= 60 && x->score <= 79) {
        x->scholarship = 5000000;
        strcpy(x->grade, "B");
    }
    else {
        x->scholarship = 0;
        strcpy(x->grade, "C");    
    }
}

int main() {
    student a;
    printf("학생 이름을 입력하세요 : ");
    scanf("%s", a.name);

    printf("학생이 받은 점수를 입력하세요 : ");
    scanf("%d", &a.score);
    
    function(&a);
    printf("\n%s 학생의 등급은 %s이며 %d의 장학금을 받습니다.\n",a.name, a.grade, a.scholarship);
}

