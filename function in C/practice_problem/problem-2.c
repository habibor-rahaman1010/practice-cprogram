//pyramid pattern in c program...

#include <stdio.h>

void pyramid(int rows) {
    int i, space, k = 0;
    for (i = 1; i <= rows; i++, k = 0) {
      for (space = 1; space <= rows - i; space++) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         k++;
      }
      printf("\n");
   }
}

int main() {
   int rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   pyramid(rows);

   return 0;
}

