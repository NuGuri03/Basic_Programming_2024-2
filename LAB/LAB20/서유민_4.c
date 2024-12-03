#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    char phone[15];
    char email[30];
}person;

void input_data(person *p) {
    for (int i = 1; i <= 2; i++) {
        printf("사람%d의 정보를 입력하세요.\n", i);
        printf("이름   : ");
        scanf("%s", p[i-1].name);
        printf("나이   : ");
        scanf("%d", &p[i-1].age);
        printf("폰번호 : ");
        scanf("%s", p[i-1].phone);
        printf("E-mail : ");
        scanf("%s", p[i-1].email);
        printf("\n");
    }
}

void remove_and_print(person *p) {
    for (int i = 0; i < 2; i++) {
        printf("사람%d : %s / %d세 / ", i + 1, p[i].name, p[i].age);
        char *ptr1 = strtok(p[i].phone, "-");
        while (ptr1 != NULL) {
            printf("%s",ptr1);
            ptr1 = strtok(NULL, "-");
        }
        printf(" / ");

        char *ptr2 = strtok(p[i].email, "@");
        
        printf("%s\n", ptr2);
    }
}

int main() {
    person p[2];
    input_data(p);
    remove_and_print(p);
}