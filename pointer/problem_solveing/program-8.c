// print pattern in c program...

#include <stdio.h>

void print_hash(int n) {
    for(int i = 1; i <= n; i++){
        printf("# ");
    }
    printf("\n");

return;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        print_hash(i);
    }

return 0;
}
