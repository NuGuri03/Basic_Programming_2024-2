#include <stdio.h>
#include <stdlib.h>


typedef struct node *nodeptr;
typedef struct node {
    char arr[20];
    nodeptr *next;
}node;

void link(node **head, node **tail) {
    node *new_node = (node*)malloc(sizeof(node));
    scanf("%s", new_node->arr);
    new_node->next = NULL;

    if ((*head) == NULL) {
        (*head) = new_node;
        (*tail) = new_node;
    }
    else {
        (*tail)->next = new_node;
        *tail = new_node;
    }
}

int main() {
    node *first_node = NULL, *last_node = NULL;
    printf("문자열 5라인 입력하시오. :\n");
    for (int i = 0; i < 5; i++) {
        link(&first_node, &last_node);
    }
    node *head = first_node;

    node *current = head;
    while (1) {
        if (current -> next != NULL) {
            printf("%s -> ", current->arr);
            current = current -> next;    
        }
        else {
            printf("%s\n", current->arr);
            break;
        }
    }
}