#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
   int i;
   if(n == 1) return 1;
   for(i = 2; i <= sqrt(n); i++)
   {
      if(n % i == 0)
      {
         return 0;
      }
   }
   return 1;
}

int main()
{
   int T, i;
   scanf("%d", &T);

   while(T--) {
      int l, r;
      scanf("%d %d", &l, &r);

      for(i = l; i <= r; i++) {
         if(isPrime(i)){
            printf("%d ", i);
         }
      }
      printf("\n");
   }
   return 0;
}
