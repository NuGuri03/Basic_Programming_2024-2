#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack* nodeptr;
typedef struct stack {
    char str[20];
    nodeptr next;
}stack;

void link(stack **first, stack **last, char *buffer) {
    stack *new = (stack*)malloc(sizeof(stack));
    strcpy(new->str, buffer);
    new->next = NULL;

    if ((*first) == NULL) {
        *first = new;
        *last = new;
    }
    else {
        (*last)->next = new;
        *last = new;
    }
}

int main() {
    stack *first = NULL, *last = NULL;
    nodeptr head;
    
    FILE *f = fopen("data.txt", "r");
    char buffer[20];
    while(fscanf(f, "%s", buffer) != EOF) {
        link(&first, &last, buffer);
    }
    head = first;

    nodeptr current = head;
    while (current != NULL) {
        printf("%s\n", current->str);
        current = current->next;
    }
}