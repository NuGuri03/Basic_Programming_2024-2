#include <stdio.h>

typedef struct food {
    char foodName[20];
    int calories;
}food;

void PrintInfo(food *foods, int nFood, int calories) {
    printf("%d칼로리 이상 : ", calories);
    for (int i = 0; i < nFood; i++) {
        if (foods[i].calories >= 400) printf("%s ", foods[i].foodName);
    }
    printf("\n");

    printf("%d칼로리 이상 : ", calories);
    for (int i = 0; i < nFood; i++) {
        if (foods[i].calories < 400) printf("%s ", foods[i].foodName);
    }
    printf("\n");
}

int main() {
    food foods[5] = {
        {"햄버거", 650},
        {"불고기", 450},
        {"초밥", 410},
        {"라면", 400},
        {"곤약", 50}
    };
 
    int c;
    printf("칼로리 값을 입력하세요 : ");
    scanf("%d", &c);
    printf("\n");

    PrintInfo(foods, 5, c);
}