//You are given two positive integers n and m . Now calculate the value of n to the power m using recursion.

#include <stdio.h>

int power_rec(int mult, int n, int m)
{
   if(m == 0)
      return mult;
   else
      return power_rec(mult*n, n, m-1);

}

int main()
{
   int n, m;
   scanf("%d %d", &n, &m);

   int ans = power_rec(1, n, m);
   printf("%d",ans);
   return 0;
}


