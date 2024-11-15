#include <stdio.h>

typedef struct {
    char name[20];
    char tel[20];
    char address[50];
} person;

typedef union {
    person man;
    char company[20];
} reg;

typedef struct {
    char year[10];
    char kind[20];
    reg owner;
} car;

int main() {
    car x[2] = {
        {"2004 09", "그랜져 GT", {.man = {"홍길동", "011-1111-1111", "서울시 구로구 고척동"}}},
        {"2006 04", "인피니티", {.company = "인피니티북스"}}
    };


    printf("%10s %20s %30s\n\n", "년 식", "종 류", "주 인");
    for (int i = 0; i < 2; i++) {
        printf("%10s %20s ", x[i].year, x[i].kind);
        
        if (i == 0) {
            printf("%20s %20s %20s\n", x[i].owner.man.name, x[i].owner.man.tel, x[i].owner.man.address);
        } else {
            printf("%32s\n", x[i].owner.company);
        }
    }

    return 0;
}
