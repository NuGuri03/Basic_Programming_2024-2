#include <stdio.h>

typedef struct wallet{
    int n50000;
    int n10000;
    int n5000;
    int n1000;
    int n500;
    int n100;
}wallet;

int cal_money(wallet w, int *m) {
    *m += 50000 * w.n50000;
    *m += 10000 * w.n10000;
    *m += 5000 * w.n5000;
    *m += 1000 * w.n1000;
    *m += 500 * w.n500;
    *m += 100 * w.n100;
}

int Cal(wallet w1, wallet w2) {
    int m1, m2;
    m1 = 0;
    m2 = 0;
    cal_money(w1, &m1);
    cal_money(w2, &m2);
    return m1 > m2 ? m1 : m2;
}

int main() {
    wallet w[2];

    for (int i = 0; i < 2; i++) {
        printf("지갑%d의 각 화폐의 수를 입력하세요.\n", i + 1);
        scanf("%d %d %d %d %d %d", &w[i].n50000,&w[i].n10000,&w[i].n5000,&w[i].n1000,&w[i].n500,&w[i].n100);
        printf("\n");
    }
    printf("둘 중 더 큰 금액은 %d원입니다.\n", Cal(w[0], w[1]));
}