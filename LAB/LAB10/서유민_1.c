#include <stdio.h>
#include <string.h>

double sum(double a, double b) {
    return a + b;
}
double sub(double a, double b) {
    return a - b;
}
double product(double a, double b) {
    return a * b;
}
double div(double a, double b) {
    return a / b;
}

int main(int argc, char *argv[]) {
    double a;
    double b;

    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf %lf", &a, &b);

    double (*functions[4])(double, double) = {sum, sub, product, div};

    printf("%.3lf + %.3lf = %.3lf\n", a, b, functions[0](a, b));

    printf("%.3lf - %.3lf = %.3lf\n", a, b, functions[1](a, b));

    printf("%.3lf * %.3lf = %.3lf\n", a, b, functions[2](a, b));

    printf("%.3lf / %.3lf = %.3lf\n", a, b, functions[3](a, b));
}