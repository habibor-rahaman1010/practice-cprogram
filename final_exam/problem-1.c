#include <stdio.h>

void draw_pattern(int n) {
   int i, j, flag = 0;
   for(i = 1; i <= n * 2; i += 2){
      for(j = 1; j <= n * 2 - i - 1; j += 2){
         printf(" ");
      }

      for(j = 1; j <= i; j++){
         flag ? printf("*"): printf("^");
      }
      flag ? flag++ : flag--;
      printf("\n");
   }
}

int main() {
   int n;
   scanf("%d", &n);

   draw_pattern(n);

return 0;
}
