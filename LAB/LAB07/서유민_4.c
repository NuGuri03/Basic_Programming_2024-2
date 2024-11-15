#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[6] = {-1};
    srand(time(NULL));

    int i = 0;
    int dup = 0;
    while (i < 6) {
        int num = rand() % 45 + 1;
        for (int j = 0; j < i; j++) {
            if (arr[j] == num) {
                dup = 1;
                break;
            }
        }
        if (dup == 0) {
            arr[i] = num;
            i++;
        }
    }
    for (int i = 0; i< 6; i++) {
        printf("%d ", arr[i]);
    }
}