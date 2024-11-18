#include <stdio.h>

void sol(int n, int from, int aux, int to) {
    if (n == 1) { 
        printf("%d -> %d\n", from, to);
        return;
    }
    
    sol(n - 1, from, to, aux);

    printf("%d -> %d\n", from , to);

    sol(n - 1, aux , from, to);

}

int main() {
    int n;
    scanf("%d", &n);
    
    sol(n, 1, 2, 3);
}