// Plus Minus


#include <stdio.h>
#include <string.h>

int main() {

  int n;
  scanf("%d", &n);
  char s[105];
  scanf("%s", s);
  int cnt = 1, maxi = 0;
  for (int i = 0; i < n - 1; ++i) {
    if (s[i] == s[i + 1]) {
      ++cnt;
    }
    else {
      if (maxi < cnt) {
        maxi = cnt;
      }
      cnt = 1;
    }
  }
  if (maxi < cnt) {
    maxi = cnt;
  }
  printf("%d\n", maxi);
  return 0;
}
