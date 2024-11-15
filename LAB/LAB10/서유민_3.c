#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    gets_s(str, 50);
    
    char* ptr = strtok(str, " ");
    while (ptr != NULL) {
        
        for (int i = strlen(ptr) - 1; i >= 0; i--) {
            printf("%c", *(ptr + i));
        }
        printf(" ");
        ptr = strtok(NULL, " ");
    }
    printf("\n");
}