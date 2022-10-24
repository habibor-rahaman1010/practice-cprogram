//Write a program in C to read any day number in integer and display day name in the word.

#include <stdio.h>

int main() {
    int day_number;
    printf("Enter the value of day number(1, 2, 3, 4, 5, 6, 7): ");
    scanf("%d", &day_number);

    if(day_number == 1){
        printf("Saturday \n");
    }
    else if(day_number == 2){
         printf("Sunday \n");
    }
    else if(day_number == 3){
        printf("Monday \n");
    }
    else if(day_number == 4){
        printf("Tuesday \n");
    }
    else if(day_number == 5){
        printf("Wednesday \n");
    }
    else if(day_number == 6){
        printf("Thursday \n");
    }
    else if(day_number == 7){
        printf("Friday \n");
    }
    else{
        printf("%d is not a valid day number, please enter the value of valid day number! \n", day_number);
    }


return 0;
}

