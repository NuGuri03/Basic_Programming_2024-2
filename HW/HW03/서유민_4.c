#include <stdio.h>

void game_field(char matrix[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 'o') {
                int x = 0;
                if (i + 1 < 5 && matrix[i + 1][j] == 'x') x++;
                if (j + 1 < 5 && matrix[i][j + 1] == 'x') x++;

                if (i - 1 >= 0 && matrix[i - 1][j] == 'x') x++;
                if (j - 1 >= 0 && matrix[i][j - 1] == 'x') x++;

                if (i - 1 >= 0 && j - 1 >= 0 && matrix[i - 1][j - 1] == 'x') x++;
                if (i - 1 >= 0 && j + 1 < 5 && matrix[i - 1][j + 1] == 'x') x++;
                if (i + 1 < 5 && j - 1 >= 0 && matrix[i + 1][j - 1] == 'x') x++;
                if (i + 1 < 5 && j + 1 < 5 && matrix[i + 1][j + 1] == 'x') x++;
                
                char y = x + '0';
                matrix[i][j] = (x != 0) ? y : ' ';
            }
        }
    }
}

int main() {
    char matrix[5][5] = { {' '} };
    printf("입력 : \n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            char input;
            while (1) {
                scanf(" %c", &input);
                if (input != ' ') {
                    matrix[i][j] = input;
                    break;
                }
            }
        }
    }

    game_field(matrix);
    printf("\n출력\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    } 
}