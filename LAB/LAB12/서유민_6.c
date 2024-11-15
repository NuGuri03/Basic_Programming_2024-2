#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone_num[14];
    char adress[100];
    char major[50];
    char subject[100];
}person;

int main() {
    person a;
    person b;

    strcpy(a.name, "홍길동");
    strcpy(a.phone_num, "011-1111-1111");
    strcpy(a.adress, "서울시 구로구 고척동");

    strcpy(b.name, "최윤호");
    strcpy(b.phone_num, "011-2222-2456");
    strcpy(b.adress, "경기도 안양시 비산동");

    printf("\t    이 름\t 전 화 번 호\t\t\t주소\n\n");
    printf("%20s%20s%40s\n",a.name, a.phone_num, a.adress);
    printf("%20s%20s%40s\n",b.name, b.phone_num, b.adress);
        
}