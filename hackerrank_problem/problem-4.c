//Binary Pairs


#include <stdio.h>

int main() {
    int t, i, n;
    printf("Enter your test case: ");
    scanf("%d", &t);

    while(t--){
        int count = 0;
        printf("Enter the value of n: ");
        scanf("%d", &n);
        char s[n];
        printf("Enter your value of (01 and 10): ");
        scanf("%s", s);

        for(i = 0; i < n; i++){
            if(s[i] == '0' && s[i + 1] == '1'){
                count++;
            }
            if(s[i] == '1' && s[i + 1] == '0'){
                count++;
            }
        }
        printf("%d \n", count);
    }

return 0;
}
