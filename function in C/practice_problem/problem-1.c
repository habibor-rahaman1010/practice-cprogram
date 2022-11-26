//You are given an integer n or –n .If you are given n , print n to –n , if you are given –n, print –n to n.

#include <stdio.h>

void myFunc(int n) {
    int i;
    if(n > 0){
        for(i = n; i >= -n; i--){
            printf("%d ", i);
        }
    }
    else if(n < 0){
      for(i = n; i <= -n; i++){
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    myFunc(n);


return 0;
}
