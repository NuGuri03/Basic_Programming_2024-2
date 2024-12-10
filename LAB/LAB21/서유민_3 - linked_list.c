#include <stdio.h>
#include <stdlib.h>

int cnt = 0;

typedef struct stack {
    int num;
    struct stack* previous;
    struct stack* next;
}queue;

void push_back(queue **back, int n) {
    queue *new = (queue*)malloc(sizeof(int));
}

void pop_front(queue **front) {
    if (*front == NULL) {
        printf("Error!\n");
        return;
    }


}

void print_menu_board() {
    printf("****************************************\n");
    printf("* 1. AddQ                              *\n");
    printf("* 2. DeleteQ                           *\n");
    printf("* 3. List                              *\n");
    printf("* 4. Exit                              *\n");
    printf("****************************************\n");
}

int main() {
    int num;
    
    int exit = 0;
    while (exit == 0) {
        print_menu_board();
        printf("Menu : ");
        scanf("%d", &num);
        

        switch (num) {
            case 1:

            break;

            case 2:

            break;

            case 3:

            break;

            case 4:
            exit = 1;
            break;
        }
    }  
}