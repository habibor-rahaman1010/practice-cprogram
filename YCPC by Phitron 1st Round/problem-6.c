// even odd in c program...

#include <stdio.h>

int is_even(int n) {
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(is_even(n)){
        printf("Even \n");
    }
    else{
        printf("Odd \n");
    };

return 0;
}
