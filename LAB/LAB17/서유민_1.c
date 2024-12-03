#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int game(int op, int k) {
    if (op - k == 1 || op - k == -2) return 1;
    else if (op - k == -1 || op - k == 2) return -1;
    else if (op == k) return 0;
}

int main() {
    srand(time(NULL));

    while (1) {
        int k = rand() % 3;
        int op;
        printf("가위<0> 바위<1> 보<2> 종료<3> 중에서 하나 입력 -> ");
        scanf("%d", &op);
        char oper[3][10];
        strcpy(oper[0], "가위");
        strcpy(oper[1], "바위");
        strcpy(oper[2], "보");

        if (op == 3) break;
        
        else if (game(op, k) == 0) {
            printf("당신은 %s이고, 시스템은 %s입니다.\n비겼습니다. 다시하세요.\n\n", oper[op], oper[k]);
        }
        else if (game(op, k) == 1) {
            printf("당신은 %s이고, 시스템은 %s입니다.\n당신의 승리입니다.\n\n", oper[op], oper[k]);
        }
        else if (game(op, k) == -1) {
            printf("당신은 %s이고, 시스템은 %s입니다.\n컴퓨터의 승리입니다.\n\n", oper[op], oper[k]);
        }
        
    }
}