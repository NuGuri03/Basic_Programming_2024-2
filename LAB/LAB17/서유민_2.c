#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("본인이 원하는 로또<1에서 45의 숫자 6개> 입력 ->\n");
    int nums[6];
    int lotto[6];
    srand(time(NULL));
    for (int i = 0; i < 6; i++) {
        scanf("%d", &nums[i]);
    }

    printf("로또를 추첨합니다.->\n");
    for (int i = 0; i < 6; i++) {
        int dup = 0;
        while (1) {
            lotto[i] = rand() % 45 + 1;
            for (int j = 0; j < i; j++) {
                if (lotto[i] == lotto[j]) {
                    dup = 1;
                    break;
                }
            }
            if (dup == 0) break;
        }
        printf("%d ", lotto[i]);
    }

    int cnt = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (lotto[i] == nums[j]) cnt++;
        }
    }
    if (7 - cnt <= 4) printf("\n\t%d개 맞았고 %d등입니다.\n",cnt, 7 - cnt);
    else printf("\n\t%d개 맞았고 탈락입니다.\n",cnt);
}