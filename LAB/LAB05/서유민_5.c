#include <stdio.h>

int main() {
    printf("입력한 거리를 변환합니다. 적당히 변환합니다.\n문자를 F나 f를 입력하면 센티미터로, 문자를 C나 c를 입력하면 피트로 변환합니다.\n\n");

    char ch;
    double d;
    printf("문자 입력 : ");
    scanf("%c", &ch);
    printf("거리 입력 : ");
    scanf("%lf", &d);

    switch(ch) {
        case'C':
        case'c':
        printf("\n센티미터 %.2lf는 피트로 %.2lf입니다.\n",d, d / 30.48);
        break;
        case'F':
        case'f':
        printf("\n피트 %.2lf는 센티미터로 %.2lf입니다.\n",d,d * 30.48);
        break;
    }
}