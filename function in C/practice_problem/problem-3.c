//pyramid pattern in c program...

#include <stdio.h>

void pyramid(int rows) {
     int i, j, space;
    for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
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

