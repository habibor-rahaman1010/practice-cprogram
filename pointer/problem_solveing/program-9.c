// print pattern in c program...

#include <stdio.h>

void print_hash(int n) {
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    printf("\n");

return;
}

int main() {

    for(int i = 1; i <= 5; i++){
        print_hash(i);
    }

return 0;
}

