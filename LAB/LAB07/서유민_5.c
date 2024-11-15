#include <stdio.h>

double fac(int n) {
    if (n == 1 || n == 0) {
        return 1.0;
    }
    return n * fac(n - 1);
}

double taylor_series_of_e(int n) {
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += 1.0 / fac(i);
    }
    return sum;
}

int main() {
    double e = 2.718056;
    int n = 1;
    while (1) {
        if (taylor_series_of_e(n) - taylor_series_of_e(n - 1) < 0.000001) {
            printf("%lf", taylor_series_of_e(n));
            break;
        }
        else n++;
    }
}