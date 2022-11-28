// c program

#include <stdio.h>

void myFunc(int n, int k) {
    int i, number[n];

    for(i = 1; i <= n; i ++){
        number[i] = 0;
    }

    int index = 0;
    for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            number[index] = i;
            index++;
        }
    }

    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            number[index] = i;
            index++;
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", number[i]);
    }
    printf("\n");
    printf("The %dth element in this sequence is %d \n", k, number[k -1]);


return;
}

int main() {
    int n, k;
    printf("Enter the value of (n and k): ");
    scanf("%d %d", &n, &k);
    myFunc(n, k);

return 0;
}
