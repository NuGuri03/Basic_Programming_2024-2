#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int stack_cnt = 0;

typedef struct stack{
    int color;
    struct stack *previous;
    struct stack *next;
}stack;

void push_back(stack **end, int color) {
    stack *new = (stack*)malloc(sizeof(stack));
    new -> color = color;
    new -> previous = *end;
    new -> next = NULL;

    if (*end == NULL) {
        *end = new;
    }
    else {
        (*end) -> next = new;
        *end = new;
    }
    stack_cnt++;
}

void pop_back(stack **end) {
    if (*end == NULL) return;
    
    if ((*end) -> previous == NULL) {
        *end = NULL;
        return;
    }
    stack *to_delete = *end;

    (*end) -> previous -> next = NULL;
    *end = (*end) -> previous;

    free(to_delete);
    stack_cnt--;
}

void create_bead(int *nums, int push) {
    printf("생성된 구슬 : ");
        for (int i = 0; i < push; i++) {
            nums[i] = rand() % 2;
            if (nums[i] == 0) {
                printf("흰 ");
            }
            else {
                printf("검 ");
            }
        }
        printf("\n");
}

void print_pocket(stack *back) {
    int arr[2] = {0};
    while (back != NULL) {
        arr[back ->color] += 1;
        back = back -> previous;
    }
    printf("결과\n");
    printf("하얀색 구슬: %d개\n검은색 구슬: %d개\n", arr[0], arr[1]);
}

int exit_program(char op) {
    if (op == 'n') {
        printf("\n프로그램을 종료합니다.\n");
        return 1;
    }
    else {
        printf("\n");
        return 0;
    }
}

int main() {
    srand(time(NULL));

    char op = 'y';
    int cnt = 0;
    int push;
    stack *back = NULL;

    int filled = 0;
    while (op == 'y') {
        printf("*****************************************\n");
        printf("구슬 개수를 입력하세요 : ");
        scanf("%d", &push);
        if (push >= 20) {
            print_pocket(back);
            printf("다시 하시겠습니까? [y/n] : ");
            scanf(" %c", &op);
            if (exit_program(op) == 1) break;    
            break;
        }

        int *nums = (int*)malloc(push * sizeof(int));
        //0 일때 흰색, 1일때 검은색
        create_bead(nums, push);

        for (int i = 0; i < push; i++) {
            if (cnt >= 20) {
                filled = 1;
                break;
            }
            
            if (nums[i] == 1) {
                push_back(&back, 1);
                cnt += 1;
                
            }
            else {
                if (cnt == 0) {
                    push_back(&back, 0);
                    cnt++;
                }
                else if (cnt == 1) {
                    pop_back(&back);
                    push_back(&back, 0);
                }
                else if (cnt >= 2) {
                    pop_back(&back);
                    pop_back(&back);
                    push_back(&back, 0);
                    cnt -= 1;
                }
            }
        }
        if (filled) {
            print_pocket(back);
            break;
        }

        free(nums);
        printf("주머니에 구슬을 넣었습니다.\n\n");

        print_pocket(back);

        printf("다시 하시겠습니까? [y/n] : ");
        scanf(" %c", &op);
        if (exit_program(op) == 1) break;    
    }
}