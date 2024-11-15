#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
   double x = 0;
   while (x <= M_PI * 2) {
      if (x <= M_PI) {
         printf("\t\t    ");
         if (sin(x) < pow(10, -10)) {
            printf("*");
         }
         else {
            for (int i = 0; i < floor(20 * abs(sin(x))); i++) {
               printf("*");         
            }
         }
      }
      else if (x <= M_PI * 2) {
         if (abs(sin(x)) < pow(10, -10)) {
            printf("\t\t   *");
         }
         else {
            for (int i = 0; i < 20 - floor(20 * abs(sin(x))); i++) {
               printf(" ");
            }
            for (int i = 0; i < floor(20 * abs(sin(x))); i++) {   
               printf("*");         
            }
         }
      }
      printf("\n");
      x += M_PI / 18.0;
   }
}
