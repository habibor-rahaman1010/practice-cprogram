//A. Wrong Subtraction problem of CodeForces...

#include <stdio.h>

int main() {
    int i, k, n;
    printf("Enter the value of n and k: ");
    scanf("%d %d", &n, &k);

    if(n >= 2 && n <= 1000000000 && k >= 1 && k <= 50){
        for(i = 0; i < k; i++){
            if(n % 10 == 0){
                n = n / 10;
            }
            else{
                n--;
            }
        }
        printf("Answer is: %d \n", n);
    }

return 0;
}
