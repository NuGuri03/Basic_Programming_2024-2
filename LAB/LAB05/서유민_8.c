#include <stdio.h>

int main() {
    for (int i = 1; i <= 15; i++) {
        if ((2*i-1) % 5 != 0) {
            printf("%d  ", 2*i - 1);
        }
        if (i % 5 == 0) {
            printf("\n");
        }
    }
}