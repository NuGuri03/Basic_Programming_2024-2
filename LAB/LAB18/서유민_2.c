#include <stdio.h>

typedef struct TIME{
    int hour, min, sec;
}TIME;

TIME sub(TIME start, TIME end) {
    if (end.sec < start.sec) {
        end.min -= 1;
        end.sec += 60;
    }
    if (end.min < start.min) {
        end.hour -= 1;
        end.min += 60;   
    }
    if (end.hour < start.hour) {
        end.hour += 24;
    }
    TIME sub_result = {end.hour - start.hour, end.min - start.min, end.sec - start.sec};
    return sub_result;
}

int main() {
    FILE *f = fopen("input_2.txt", "r");
    FILE *o = fopen("output_2.txt", "w");

    TIME start, end;
    fscanf(f, "%d:%d:%d", &start.hour, &start.min, &start.sec);
    fscanf(f, "%d:%d:%d", &end.hour, &end.min, &end.sec);
    
    TIME result = sub(start, end);
    fprintf(o, "경과시간은 %d:%d:%d입니다.\n", result.hour, result.min, result.sec);

    printf("input.txt 출력\n%d:%d:%d\n%d:%d:%d\n\n\n", start.hour, start.min, start.sec, end.hour, end.min, end.sec);
    
    fprintf(stdout, "경과시간은 %d:%d:%d입니다.\n", result.hour, result.min, result.sec);
}