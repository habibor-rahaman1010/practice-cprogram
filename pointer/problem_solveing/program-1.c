/*
You are given a positive integer n. The second line will contain n positive integers. The third line will contain a value k.
Now print the total count of strictly less and strictly greater value from k. Implement
*/

#include <stdio.h>

void myFunc(int ara[], int n) {
    printf("Enter the elements of array: ");

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int count = 0, k;
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for(i = 0; i < n; i++){
        if(ara[i] != k){
            count++;
        }
    }
    printf("%d \n", count);

return;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ara[n];
    myFunc(ara, n);


return 0;
}
