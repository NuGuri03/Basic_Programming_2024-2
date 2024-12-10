#include <stdio.h>
#include <string.h>

int main() {
    char str[3][100];
    for (int i = 0; i < 3; i++) {
        gets_s(str[i], 100);
    }

    char word[80][11];
    int word_cnt[80] = {0};
    int total_cnt = 0;
    for (int i = 0; i < 3; i++) {
        char *ptr = strtok(str[i], " ");
        while (ptr != NULL) {
            int find = -1;
            for (int j = 0; j < total_cnt; j++) {
                if (strcmp(ptr, word[j]) == 0) {
                    find = j;
                    break;
                }
            }
            if (find != -1) {
                word_cnt[find]++;
            }
            else {
                strcpy(word[total_cnt], ptr);
                word_cnt[total_cnt++] = 1;
            }
            ptr = strtok(NULL, " ");
        }
    }

    for (int i = 0; i < total_cnt; i++) {
        printf("%s - %d회\n", word[i], word_cnt[i]);
    }
}