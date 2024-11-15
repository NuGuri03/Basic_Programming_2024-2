#include <stdio.h>

int main() {
    for (int i = 0; i < 11; i++) {
        printf("섭씨온도 : %d = 화씨온도 : %.f\n",i * 20, (i * 20) / (5.0/9.0) + 32);
    }
}
