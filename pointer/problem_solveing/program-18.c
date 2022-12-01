// distinct number of digit leaper in c program....

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

int is_leapyear(int year) {
    if((year % 400 == 0) || (year % 4 == 0  && year % 100 != 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    printf("Enter your value of year: ");
    scanf("%d", &n);

    int result = is_leapyear(n);


    if(result == 1){
        if(is_distinct(n) == 1){
            printf("Distinct Leap Year %d \n", n);
        }
        else{
            printf("Leap Year %d \n", n);
        }
    }
    else{
        printf("Not Leap Year %d \n", n);
    }

return 0;
}
