#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d ^ %d = %.f    %d ^ %d = %.f\n",i, 2, pow(i, 2), i, 3, pow(i, 3));
    }
}