#include <stdio.h>
#include <string.h>

int strist(char *src, char* ist, int index) {
    if (strlen(src) < index) return 0;
    
    int len = strlen(ist);


    int count = 0;
    char temp[100];
    for (int i = index; src[i] != '\0'; i++) {
        temp[i - index] = src[i];
        count++;
    }
    temp[count + 1] = '\0';

    int i = 0;
    while (1) {
        if (index <= i && i < len + index) src[i] = ist[i - index];
        else if (i == len + index) src[i] = ' ';
        else if (i > len + index) src[i] = temp[i - 1 - len - index];

        if (src[i] == '\0') break;
        else i++;
    }
    return 1;
}

int main() {
    char str[100];
    printf("origin string : ");
    fgets(str, 100, stdin);

    char i_str[100];
    printf("string to insert : ");
    gets_s(i_str, 100);
    
    if (strist(str, i_str, 8) == 1) {
        printf("result : %s", str);
    }
    else {
        printf("Error!\n");
    }
}