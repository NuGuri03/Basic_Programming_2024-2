#include <stdio.h>

void print_menu_board() {
    printf("****************************************\n");
    printf("* 1. AddQ                              *\n");
    printf("* 2. DeleteQ                           *\n");
    printf("* 3. List                              *\n");
    printf("* 4. Exit                              *\n");
    printf("****************************************\n");
}

void push_back(int *queue, int *cnt) {
    if (*cnt > 5) {
        printf("Error!\n\n");
        return;
    }

    int n;
    printf("AddQ Data : ");
    scanf("%d", &n);
    queue[(*cnt)++] = n;
    printf("\n");
}

void pop_back(int *queue, int *cnt) {
    if (*cnt <= 0) {
        printf("Error!\n\n");
        return;
    }

    int n = queue[0];
    for (int i = 0; i < 4; i++) {
        queue[i] = queue[i + 1];
    }
    queue[4] = -1;
    *cnt = *cnt - 1;

    printf("DeleteQ Data : %d\n\n", n);
}

void print_list(int* queue, int cnt) {
    printf("List : ");
    for (int i = 0; i < cnt; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n\n");
}

int main() {
    int queue[5] = {-1};
    int cnt = 0;
    
    int num;
    int exit = 0;
    while (exit == 0) {
        print_menu_board();
        printf("Menu : ");
        scanf("%d", &num);
        
        switch (num) {
            case 1:
            push_back(queue, &cnt);
            break;

            case 2:
            pop_back(queue, &cnt);
            break;

            case 3:
            print_list(queue, cnt);
            break;

            case 4:
            exit = 1;
            printf("Exit\n");
            break;
        }
    }  
}