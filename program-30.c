//Write a program in C to read any day number in integer and display day name in the word.

#include <stdio.h>

int main() {
    int day_number;
    printf("Enter the value of day number(1, 2, 3, 4, 5, 6, 7): ");
    scanf("%d", &day_number);

    switch(day_number) {
    case 1:
        printf("Saturday \n");
        break;

    case 2:
        printf("Sunday \n");
        break;

    case 3:
        printf("Monday \n");
        break;

    case 4:
        printf("Tuesday \n");
        break;

    case 5:
        printf("Wednesday \n");
        break;

    case 6:
        printf("Thursday \n");
        break;

    case 7:
        printf("Friday \n");
        break;

    default:
        printf("%d is not a valid day number, please enter the value of valid day number! \n", day_number);
    }


return 0;
}
