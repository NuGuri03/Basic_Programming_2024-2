#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone_num[14];
    char adress[100];
    char major[50];
    char subject1[100];
    char subject2[100];
}professor;

int main() {
    professor persons[10] = {
        {"홍길동", "011-1111-1111", "서울시 구로구 고척동","전산과", "객체지향", "분석설계"},
        {"최윤호", "011-2222-2456", "경기도 안양시 비산동","전산과", "C 언어", "자바 입문"},
        {"박종학", "011-3333-2456", "인천광역시 간석동","전산과", "컴퓨터개론", "프로그래밍"},
        {"이종석", "016-3467-4389", "서울시 강남구 도곡동","교양과", "영어회화", "국어"},
        {"신용헌", "017-2222-2456", "경기도 일산시 화곡동","교양과", "기초수학","이산수학"}
    };

    printf("\t   이 름\t 전 화 번 호\t\t        주 소\t\t\t학 과\t\t\t    담 당  과 목\n\n");
    for (int i = 0; i < 5; i++) {
        printf("%20s%20s%40s%20s%30s%20s\n", persons[i].name,persons[i].phone_num, persons[i].adress, persons[i].major, persons[i].subject1,persons[i].subject2);
    }
}