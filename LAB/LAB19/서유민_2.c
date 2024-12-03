#include <stdio.h>
#include <string.h>

typedef struct person {
    char name[20];
    char tell[20];
    char adress[80];
}person;

void swap(person *a, person *b) {
    person temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    person people[3] = {
        {"홍길동", "011-1111-1111", "서울시 구로구 고척동"},
        {"조명호", "017-3245-3278", "서울시 강남구 도곡동"},
        {"최윤호", "011-2222-24560", "경기도 안양시 비산동"}
    };

    for (int i = 2; i >= 0; i--) {
        for (int j = 0; j + 1 <= i; j++) {
            if (strcmp(people[j].name, people[j + 1].name) > 0) swap(&people[j], &people[j + 1]);
        }
    }

    FILE *f = fopen("data.bin", "wb");
    fwrite(people, sizeof(person), 3, f);
    fclose(f);

    
    person read_data[3];
    FILE *fp = fopen("data.bin", "rb");
    fread(read_data, sizeof(person), 3, fp);

    for (int i = 0; i < 3; i++) {
        if (strncmp(read_data[i].adress, "서울", 2) == 0) printf("%s %s\n",read_data[i].name, read_data[i].tell);
    }


}