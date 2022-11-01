#include <stdio.h>
int main() {
  long long n;
  int count = 0;
  printf("Enter the value of n: ");
  scanf("%lld", &n);

  while(n != 0){
    n /= 10;
    count++;
  }

  printf("%d digits", count);
}
