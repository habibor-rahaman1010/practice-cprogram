// c program

#include <stdio.h>

void myFunc(int n, int k) {
    int i, number[n];

    for(i = 1; i <= n; i ++){
        number[i] = 0;
    }

    for(i = 1; i <= n; i ++){
        if(i % 2 == 0){
            number[i] = i;
        }
    }

    int len = sizeof(number) / sizeof(number[0]);

    for(i = 1; i <= n; i++){
        printf("%d ", number[i]);
    }


return;
}

int main() {
    int n, k;
    printf("Enter the value of (n and k): ");
    scanf("%d %d", &n, &k);
    myFunc(n, k);

return 0;
}
