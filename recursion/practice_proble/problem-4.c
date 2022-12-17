//You are given an integer n . Now print n to 1 . Implement it using recursion.

#include <stdio.h>

void rec_N_1(int n)
{
   if(n>0)
   {
      printf("%d ", n);
      return rec_N_1(n-1);
   }
}

int main()
{
   int N;
   scanf("%d", &N);

   printf("Printing N to 1 numbers  >>  ");
   rec_N_1(N);
   printf("\n");

return 0;
}




