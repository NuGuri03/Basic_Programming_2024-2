#include <stdio.h>

typedef struct {
    int number;
    char name[40];
    int mid, final, quiz;
}psscore;

void print(psscore *p, int cnt) {
    printf("현재의 성적 내용은 >>\n");
    printf("---------------------------------------------\n");
    printf("번호      이름      중간      기말      퀴즈\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < cnt; i++) {
        printf("%2d%16s%8d%10d%10d\n", p[i].number, p[i].name, p[i].mid, p[i].final, p[i].quiz);
    }
    printf("---------------------------------------------\n");
}

void find_student(psscore *p, int num) {
    num -= 1;
    printf("찾은 학생의 정보는 >> \n\n");
    printf("%2d%16s%8d%10d%10d\n", p[num].number, p[num].name, p[num].mid, p[num].final, p[num].quiz);
}

int main() {
    psscore p[20] = {
    {1 ,"권다애", 87, 98, 25},
    {2, "김근태", 89, 78, 30},
    {3, "양보원", 79, 87, 30},
    {4, "홍길동", 94, 75, 21}
    };
    int cnt = 4;
    
    print(p, cnt);

    printf("\n가장 큰 번호의 학생은 %d번 입니다 >>\n 찾을 학생 번호를 입력하세요. >> ", cnt);
    
    int num;
    scanf("%d", &num);
    printf("\n");
    find_student(p, num);
}
