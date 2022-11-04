//CodeForces problem A. Team....

#include <stdio.h>

int main() {
    int Petya, Vasya, Tonya, i, n;
    int solved = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 1000){
        printf("Enter value of input: ");
        for(i = 0; i < n; i++){
            scanf("%d %d %d", &Petya, &Vasya, &Tonya);
            if(Petya + Vasya + Tonya >= 2){
                solved++;
            }
        }
    }

    printf("%d", solved);

return 0;
}
