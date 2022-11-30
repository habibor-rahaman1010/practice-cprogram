// leap year in c program...

#include <stdio.h>

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
        printf("Leap Year %d \n", n);
    }
    else{
        printf("Not Leap Year %d \n", n);
    }

return 0;
}
