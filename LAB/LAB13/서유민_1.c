#include <stdio.h>

typedef enum {
    True = 1,
    False = 0
}boolean;

boolean function(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[0] < arr[i]) return False;
    }
    return True;
}

int main() {
    int arr[10];

    int len = 0;
    while (scanf("%d", &arr[len]) != EOF) {
        len++;
    }

    printf("%s", function(arr, len) == True ? "True\n" : "False\n");
}