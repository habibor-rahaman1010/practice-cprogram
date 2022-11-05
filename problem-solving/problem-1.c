// Missing Number

#include <stdio.h>

int main() {
    int i, t, a, b, c;
    int sum = 0;
    int missing = 0;
    scanf("%d", &t);

    for(i = 0; i < t; i++){
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        missing = sum - (a + b + c);
        printf("%d \n", missing);
    }

return 0;
}
