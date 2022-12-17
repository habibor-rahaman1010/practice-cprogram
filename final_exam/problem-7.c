#include <stdio.h>

int main() {
   int T, j = 1;
   scanf("%d", &T);

   while(j <= T) {
      int n, i, index = -1;
      scanf("%d", &n);
      int ara[n];

      for(i = 0; i < n; i++){
        scanf("%d ", &ara[i]);
      }

      int search;
      scanf("%d", &search);

      for(i = 0; i < n; i++)
      {
         if(ara[i] == search)
         {
            index = i;
            break;
         }
      }

      if(index == -1) {
         printf("Case %d: Not Found\n", j);
      }
      else {
         printf("Case %d: %d\n", j, index + 1);
      }
      j++;
   }
   return 0;
}
