//You are given an integer n . Now print the sum of first n natural numbers.

#include <stdio.h>

int sum_1_N(int summ, int n)
{
   if(n==0)
      return summ;
   else
   {
      summ += n;
      return sum_1_N(summ, n-1);
   }
}

int main()
{
   int N;
   scanf("%d", &N);
   int ans = sum_1_N(0, N);
   printf("Printing sum of N to 1 numbers  >>  %d", ans);
   printf("\n");
   return 0;
}

