#include <stdio.h>
#include <string.h>
#define MAX 50

int size = 0;
typedef struct food {
    char name[20];
    int price;
}food;
food menu[MAX];
int find_index(food *f, char *name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(f[i].name, name) == 0) return i;
    }
    return -1;
}
void insert(food *f) {
    printf("\n음식 이름을 입력하세요 : ");
    scanf("%s", f[size].name);
    printf("음식 가격을 입력하세요 : ");
    scanf("%d", &f[size].price);
    size++;
}
void print(food *f) {
    printf("\t\t\t<<음식 정보 출력>>\n\n");
    for (int i = 0; i < size; i++) {
        printf("이름 : %s, 가격 : %d\n", f[i].name, f[i].price);
    }
}
void delete(food *f) {
    printf("\n삭제할 음식 제목을 입력하세요. ");
    char name[20];
    scanf("%s", name);
    int index = find_index(f, name);
    for (int i = index; i + 1 < size; i++) {
        f[i] = f[i + 1];
    }
    size--;
    printf("\n%s의 정보를 삭제하였습니다.\n", name);
}
void update(food *f) {
    printf("\n수정할 음식 제목을 입력하세요 : ");
    char up_food[20];
    scanf("%s", up_food);
    printf("수정할 가격을 입력하세요 : ");
    scanf("%d", &f[find_index(f, up_food)].price);
}
void file_save(food *f) {
    FILE *fp = fopen("food.txt", "wb");
    fwrite(menu, sizeof(food), size, fp);
    fclose(fp);
    printf("파일이 저장되었습니다.\n");
}
void file_load(food *f) {
    FILE *fp = fopen("food.txt", "rb");
    food read_data[MAX];
    fread(read_data, sizeof(food),size, fp);
    printf("\t\t\t<<파일 음식 정보 출력>>\n\n");
    for (int i = 0; i < size; i++) {
        printf("이름 : %s, 가격 : %d\n", read_data[i].name, read_data[i].price);
    }
    fclose(fp);
}

int main() {
    int op;
    while (1) {
        printf("<< 1. 추가 || 2. 삭제 || 3. 수정 || 4. 목록 || 5. 파일 로드 || 6. 저장 || 7. 종료 >>\n==>메뉴선택 : ");
        scanf("%d", &op);
        if (op == 7) {
            printf("\n프로그램을 종료합니다.\n");
            break;
        }

        switch (op) {
            case 1:
            insert(menu);
            break;
            case 2:
            delete(menu);
            break;
            case 3:
            update(menu);
            break;
            case 4:
            print(menu);
            break;
            case 5:
            file_load(menu);
            break;
            case 6:
            file_save(menu);
            break;
        }
    }
}