#include <stdio.h>
#include <stdlib.h>

void func(int n, int x) {
    int temp = n;
    int cnt = 0;
    while (temp != 0) {
        temp /= x;
        cnt++;
    }
    char *arr = (char*)calloc(cnt, sizeof(char));
    int i = 0;
    while (n != 0) {
        arr[i++] = n % x >= 10 ? n % x - 10 + 'a' : n % x + '0';
        n /= x;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        printf("%c",arr[i]);
    }
    printf("\n");
}

int main() {
    int n, x;
    printf("입력 : ");
    scanf("%d %d", &n, &x);
    
    printf("출력 : ");
    func(n, x);
}