//special number in c program...

/*
    7 must be present...
    digit summation must be more then 10...
    last digit muse be prime
*/

#include <stdio.h>

int is_seven(int n) {
    while(n > 0){
        if(n % 10 == 7){
            return 1;
        }
        else{
           n /= 10;
        }
    }
    return 0;
}

int digit_summation(int n) {
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int is_prime(int n) {
    int ld = n % 10;
    if(ld == 2 || ld == 3 || ld == 5 || ld == 7){
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

    if(is_seven(n) == 1 && digit_summation(n) > 10 && is_prime(n) == 1){
        printf("It\'s spacial number of Habib! \n");
    }
    else{
        printf("Dump number! \n");
    }

return 0;
}
