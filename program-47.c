// if n is even so n divided 2, if n is odd n * 3 + 1 in c program....

#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    while(n > 1){
        printf("%lld ", n);

        if(n% 2 == 0){
            n = n / 2;
        }
        else{
            n = n * 3 + 1;
        }
    }
    printf("%lld", n);


return 0;
}
