#include <stdio.h>

int main() {
    int n1, n2, lcm;
    printf("Enter the value of (n1 and n2): ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        lcm = n1;
    }
    else{
        lcm = n2;
    }

    while (1) {
        if ((lcm % n1 == 0) && (lcm % n2 == 0)) {
            printf("The LCM of %d and %d is %d. \n", n1, n2, lcm);
            break;
        }
        lcm++;
    }
    return 0;
}
