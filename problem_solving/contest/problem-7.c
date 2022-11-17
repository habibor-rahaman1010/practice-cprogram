#include <stdio.h>
#include <math.h>

int main() {

  int t;
  scanf("%d", &t);
  while (t--) {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long tot = 0;
    for (int i = 0; i < n; ++i) {
      long long x;
      scanf("%lld", &x);
      tot += x * 2;
    }
    if (tot <= m) {
      printf("Yes\n");
    }
    else {
      printf("No\n");
    }
  }
}
