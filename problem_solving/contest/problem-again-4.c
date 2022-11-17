#include <stdio.h>
#include <string.h>

int main() {

  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int maxi = 0;
    for (int i = 0; i < n; ++i) {
      int x;
      scanf("%d", &x);
      if (maxi < x) {
        maxi = x;
      }
    }
    printf("%d\n", maxi);
  }
}
