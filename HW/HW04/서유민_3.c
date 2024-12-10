#include <stdio.h>
#include <stdlib.h>

typedef struct stack *nodeptr;
typedef struct stack {
    char arr[20];
    nodeptr next;
}stack;

void link(stack **first_node, stack **last_node) {
    stack *new_node = (stack*)malloc(sizeof(stack));
    scanf("%s", new_node->arr);
    new_node->next = NULL;

    if ((*first_node) == NULL) {
        (*first_node) = new_node;
        (*last_node) = new_node;
    }
    else {
        (*last_node)->next = new_node;
        *last_node = new_node;
    }
}

int main() {
    stack *first_node = NULL, *last_node = NULL;
    nodeptr head;
    printf("문자열 5라인 입력하시오. :\n");
    for (int i = 0; i < 5; i++) {
        link(&first_node, &last_node);
    }
    head = first_node;

    nodeptr current = head;
    while (current != NULL) {
        if (current->next != NULL) {
            printf("%s -> ", current->arr);
        }
        else {
            printf("%s\n", current->arr);
        }
        current = current->next;
    }
}