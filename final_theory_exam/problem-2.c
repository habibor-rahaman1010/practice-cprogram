//fibonacci in c program...

#include <stdio.h>

void printFibonacci(int n) {
    int i, first = 0, second = 1;
    printf("%d, %d", first, second);

    int third = first + second;

    for (i = 3; i <= n; ++i) {
        if(i <= n){
            printf(", ");
        }
        printf("%d", third);
        first = second;
        second = third;
        third = first + second;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printFibonacci(n);

  return 0;
}

