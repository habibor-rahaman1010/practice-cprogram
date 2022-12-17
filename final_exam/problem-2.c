#include <stdio.h>

void swap(int* a, int* b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void sort(int ara[], int len, int asc) {
    int i, j;
   for(i = 0; i < len; i++) {

      for(j=i; j<len; j++) {
         if(asc)
            ara[i] > ara[j] ? swap(&ara[i], &ara[j]) : NULL;
         else
            ara[i] < ara[j] ? swap(&ara[i], &ara[j]) : NULL;
      }
   }
}

int main() {
    int n, i;
    scanf("%d", &n);

    int A[n];
    int B[n];

    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    for(i = 0; i < n; i++){
        scanf("%d", &B[i]);
    }

    sort(A, n, 1);
    sort(B, n, 0);

    for(i = 0; i < n; i++) {
      printf("%d ", A[i] - B[i]);
   }

return 0;
}
