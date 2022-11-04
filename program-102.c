//CodeForces problem A. Team....

#include <stdio.h>

int main() {
    int m, i, n;
    int solved = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 1000){
        printf("Enter value of input: ");
        for(i = 0; i < n; i++){
            int counter = 0;
            for(int j = 0; j < 3; j++){
                scanf("%d", &m);
                counter += m;
            }
            if(counter >= 2){
                solved++;
            }
        }
    }

    printf("%d", solved);

return 0;
}

