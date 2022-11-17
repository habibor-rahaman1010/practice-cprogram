#include <stdio.h>
#include <math.h>

int main() {

  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int tot = 0;
    for (int i = 0; i < n; ++i) {
      int x;
      scanf("%d", &x);
      float y = sqrt(x);
      if ((int)y*y == x) {
        tot++;
      }
    }
    if (tot == 0) {
      printf("-1\n");
    }
    else {
      printf("%d\n", tot);
    }
  }

}
