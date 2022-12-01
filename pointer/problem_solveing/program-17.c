//distinct digit checked in c program...

#include <stdio.h>

int is_distinct(int n) {

    //initialize to zero...
    int ara[10];
    for(int i = 0; i < 10; i++){
        ara[i] = 0;
    }

    int ld;
    while(n > 0){
        ld = n % 10;
        ara[ld]++;
        n /= 10;
    }

    for(int i = 0; i < 10; i++){
        if(ara[i] > 1){
            return 0;
        }
    }
    return 1;
}

int main() {
    int digit;
    printf("Enter your digit: ");
    scanf("%d", &digit);

    int ans = is_distinct(digit);

    if(ans == 1){
        printf("Distinct Number is: %d \n", digit);
    }
    else{
       printf("Not Distinct Number is: %d \n", digit);
    }

return 0;
}
