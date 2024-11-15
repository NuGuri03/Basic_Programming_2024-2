#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *f;
    f = fopen(argv[1], "r");
    
    char line[256];
    printf("원래의 파일 내용 출력 : -->\n\n");
    while(fgets(line, 256, f) != NULL) {
        printf("%s", line);
    }

    rewind(f);
    printf("\n\n변환된 파일 내용 출력 : -->\n\n");
    while (fgets(line, 256, f) != NULL) {
        for (int i = 0; line[i] != '\0'; i++) {
            char ch = line[i];
            if (ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
            else if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
            printf("%c", ch);
        }
    }
    printf("\n");
}