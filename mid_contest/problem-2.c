// Operator!!
/*
You are given a string S consisting only +(Addition),*(Multiplication). The next line will contain two positive values.
Now, Calculate the sum of every operations. See the explanation for more clarification.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int a, b, sum = 0, i;
    char s[20];
    scanf("%s", s);
    int len = strlen(s);

    scanf("%d %d", &a, &b);

    for(i = 0; i < len; i++){
        if(s[i] == '+'){
            sum += a + b;
        }

        if(s[i] == '*'){
            sum += a * b;
        }
    }

    printf("%d", sum);

return 0;
}
