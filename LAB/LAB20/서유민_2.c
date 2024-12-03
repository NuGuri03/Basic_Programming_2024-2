#include <stdio.h>

typedef struct {
    int number;
    char name[40];
    int mid, final, quiz;
}psscore;

void appendScore(psscore *p, int *cnt) {
    scanf("%s %d %d %d", p[*cnt].name, &p[*cnt].mid, &p[*cnt].final, &p[*cnt].quiz);
    p[*cnt].number = *cnt + 1;
    *cnt = *cnt + 1;
    printf("\n");
}

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

int main() {
    psscore p[20] = {
    {1 ,"권다애", 87, 98, 25},
    {2, "김근태", 89, 78, 30},
    {3, "양보원", 79, 87, 30},
    {4, "홍길동", 94, 75, 21}
    };
    int cnt = 4;
    
    print(p, cnt);

    printf("\n추가할 이름과 성적<중간, 기말, 퀴즈>을 입력하세요.\n\n");
    appendScore(p, &cnt);

    print(p, cnt);
}
