// even and odd number in c program...

#include <stdio.h>

void even(int n) {
    for(int i = 1; i < n; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    even(n);

return 0;
}

