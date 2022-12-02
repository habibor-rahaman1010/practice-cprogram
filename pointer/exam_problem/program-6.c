//Divisible 3 or Divisible by 5 and total divisor cont in c program...

#include <stdio.h>


//divisible by 3
int divisible3(int ara[], int n) {
    int i, count3 = 0;
    for(i = 0; i < n; i++){
        if(ara[i] % 3 == 0 && ara[i] % 5 == 0){
            continue;
        }
        else if(ara[i] % 3 == 0){
            count3++;
        }
    }
    if(count3 > 0){
        printf("by three: %d \n", count3);
        return count3;
    }
    else{
        return -1;
    }
}

//divisible by 5
int divisible5(int ara[], int n) {
    int i, count5 = 0;
    for(i = 0; i < n; i++){
        if(ara[i] % 5 == 0){
            count5++;
        }
    }
    if(count5 > 0){
        printf("by five: %d\n", count5);
        return count5;
    }
    else{
        return -1;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 100){
        int ara[n], i;
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }

        int result = divisible3(ara, n);
        int result2 = divisible5(ara, n);

        if(result == -1 && result2 == -1){
            printf("%d \n", -1);
        }
        else{
            printf("ans: %d \n", result + result2);
            printf("answer by three: %d \n", result);
            printf("answer by five: %d \n", result2);
        }

    }
    else{
        printf("Constraints is: (n >= 1 && n <= 100) \n");
    }

return 0;
}
