#include <stdio.h>

char change(char ch) {
    if (65 <= ch && ch <= 90) {
        ch = (ch + 3 <= 90) ? ch + 3 : ch + 3 - 26;
    }
    else if ('a' <= ch && ch <= 'z') {
        ch = (ch + 3 <= 'z') ? ch + 3 : ch + 3 - 26;
    }
    return ch;
}

int main() {
    char str[100];
    while(gets_s(str, 100) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            printf("%c", change(str[i]));
        }

        if (str[0] == '\0') break;
    }
}