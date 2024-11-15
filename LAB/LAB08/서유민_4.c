#include <stdio.h>

int add(int* num_list, int size) {
   int res = 0;
   for (int i = 0; i < size; i++) {
      res += *(num_list + i);
   }
   return res;
}

int main() {
   char subject[3][30] = {
      "C 프로그래밍","컴퓨터 개론","객체지향 프로그래밍"
   };

   int score[4][3] = {
      {30,30,40}, {78,93,88} ,{98,99,75},{69,78,85}
   };
   
   printf("\t");
   for (int i = 0; i < 3; i++) {
      printf("%s\t", subject[i]);
   }
   printf("합\n");

   for (int i = 0; i < 4; i++) {
      printf("학생%d\t\t", (i + 1));
      for (int j = 0; j < 3; j++) {
         printf("%d\t\t", score[i][j]);
      }
      printf("%d\n", add(score[i], 3));
   }
}