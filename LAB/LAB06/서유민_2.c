#include <stdio.h>

int leap_year(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) return 1;
    else return 0;
}

int main() {
    int year;
    int month;
    printf("년과 월을 입력하면 말일 날짜를 출력합니다.\n년 입력 : ");
    scanf("%d", &year);
    printf("월 입력 : ");
    scanf("%d", &month);

    int day;
    if (leap_year(year) == 1 && month == 2) day = 29;
    else day = 28;

    printf("%d년 %d월의 말일은 %d일입니다.\n", year, month, day);
}