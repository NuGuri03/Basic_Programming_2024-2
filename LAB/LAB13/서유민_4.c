#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int accountNum;
    char name[30];
    int deposit;
    int loan;
}account;

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    account person[10];
    int max = 0;
    int max_i = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d %d", &person[i].accountNum, person[i].name, &person[i].deposit, &person[i].loan);
        if (person[i].loan > max) {
            max = person[i].loan;
            max_i = i;
        }
    }
    
    printf("%d %s %d %d\n", person[max_i].accountNum, person[max_i].name, person[max_i].deposit, person[max_i].loan);
}