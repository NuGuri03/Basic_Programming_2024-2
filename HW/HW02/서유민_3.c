#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ch[26];
    for (int i = 0; i < 26; i++) {
        ch[i] = i;
    }

    srand(time(0));

    for (int i = 25; i >= 0; i--) {
        int j = rand() % (i + 1);

        int temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c", ch[i] + 'a');
    }
    printf("\n");
}
