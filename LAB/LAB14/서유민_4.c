#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *f;
    f = fopen(argv[1], "r");

    char line[256];
    int line_cnt = 0;
    int word_cnt = 0;
    int ch_cnt = 0;

    while (fgets(line, 256, f) != NULL) {
        line_cnt++;

        char *ptr = strtok(line, " ");
        while(ptr != NULL) {
            ch_cnt += strlen(ptr);
            word_cnt++;
            ptr = strtok(NULL, " ");
        }
    }

    printf("%30s", "Analysis Result\n");
    printf("------------------------------------\n");
    printf("%30s : %d\n", "Count of Character", ch_cnt);
    printf("%30s : %d\n", "Count of Word", word_cnt);
    printf("%30s : %d\n", "Count of Line", line_cnt);
    
}