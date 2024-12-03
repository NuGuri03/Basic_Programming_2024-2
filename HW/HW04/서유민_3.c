#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodeptr;
typedef struct node {
    char arr[20];
    nodeptr next;
}node;

void link(node **first_node, node **last_node) {
    node *new_node = (node*)malloc(sizeof(node));
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
    node *first_node = NULL, *last_node = NULL;
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