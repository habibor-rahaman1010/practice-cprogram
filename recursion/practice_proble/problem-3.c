//You are given an integer n . Now print 1 to n . Implement it using recursion.


#include <stdio.h>

void rec_1_N(int i, int n)
{
   if(i<= n)
   {
      printf("%d ", i);
      return rec_1_N(i+1, n);
   }
}


int main()
{
   int N;
   scanf("%d", &N);

   printf("Printing 1 to N numbers  >>  ");
   rec_1_N(1, N);
   printf("\n");
   return 0;
}



