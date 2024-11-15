#include <stdio.h>

void bin2IP(char binary[33]) {
    int IP[4] = { 0 };
    for (int i = 0; i < 4; i++) {
        int factor = 1 << 7;
        int x = 0;
        for (int j = i * 8; j < i * 8 + 8; j++) {
            if (binary[j] == '1') {
                x += factor;
            }
            factor /= 2;    
        }
        IP[i] = x;
    }
    
    printf("%d.%d.%d.%d\n", IP[0], IP[1], IP[2], IP[3]);
}

int main() {
    char binary_n[33];
    printf("이진수 입력 : ");
    scanf("%32s", binary_n);

    printf("반환 결과 : ");
    bin2IP(binary_n);
}