#include <stdio.h>
#include <string.h>

int main() {
    char words[80][10] = {0};
    int count[80] = {0};

    char str[80];
    for (int s = 0; s < 3; s++) {
        gets_s(str, 100);
        char *ptr = strtok(str, " ");
        while (ptr != NULL) {
            for (int i = 0; i < 80; i++) {
                if (strcmp(ptr, words[i]) == 0) {
                    count[i]++;
                    break;
                } 
                if (words[i][0] == 0) {
                    strcpy(words[i], ptr);
                    count[i]++;
                    break;
                }
            }
            ptr = strtok(NULL, " ");
        }
    }
    for (int i = 0; i < 80 && words[i][0] != 0; i++) {
        printf("%s - %d회\n", words[i], count[i]);
    }
}