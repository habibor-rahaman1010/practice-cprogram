#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    int n;
    int pairs;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        pairs = 0;
        for(int i = 0; i < n; i++){

            if(s[i] == '1' && s[i+1] == '0') pairs++;
            if(s[i] == '0' && s[i+1] == '1') pairs++;
        }

        printf("%d\n", pairs);
    }

    return 0;
}
