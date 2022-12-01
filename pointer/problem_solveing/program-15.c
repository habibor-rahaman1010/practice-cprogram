// n factorial number in c program use recursion function....

#include <stdio.h>

int recursion(int n) {
    if(n == 1){
       return 1;
    }
    else{
        return n * recursion(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = recursion(n);
    printf("Sum is: %d \n", result);

return 0;
}


