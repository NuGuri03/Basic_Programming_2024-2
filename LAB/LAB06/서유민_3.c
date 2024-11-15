#include <stdio.h>

int leap_year(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) return 1;
    else return 0;
}

int main() {
    int year, month, day;
    printf("날짜를 입력하시오(년 월 일) : ");
    scanf("%d %d %d", &year, &month, &day);

    int result = 0;
    for (int i = 1; i < year; i++) {
        if(leap_year(i) == 1) result += 366;
        else result += 365;
    }

    if (month > 2) {
        for (int i = 1; i <= month; i++) {
            if (i != 2) {
                if (i % 2 == 0) result += 31;
                else result += 30;
            }
            else {
                result = (leap_year(year) == 1) ? result + 29 : result + 28;
            }
        }
    }
    else {
        if (month == 1) result += day;
        else if (month == 2) result += day + 30;
    }

    printf("%d일\n", result);
}