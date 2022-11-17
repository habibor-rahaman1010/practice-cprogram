//check n is divisible to 3 and n last exist 5 then n is beautiful...

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0){
        printf("%d is beautiful. \n", n);
    }
    else{
        printf("%d is not beautiful. \n", n);
    }

return 0;
}
