
//Write a program in C to read any Month Number in integer and display Month name in the word.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number which between (1 to 12): ");
    scanf("%d", &n);

    switch(n){
    case 1:
        printf("January have 31 days. \n");
        break;

    case 2:
        printf("February 28 days (common year) 29 days (leap year*)");
        break;

    case 3:
        printf("March have 31 days. \n");
        break;

    case 4:
        printf("April have 30 days. \n");
        break;

    case 5:
        printf("May have 31 days \n");
        break;

    case 6:
        printf("June have 30 days. \n");
        break;

    case 7:
        printf("July have 31 days. \n");
        break;

    case 8:
        printf("August have 31 days. \n");
        break;

    case 9:
        printf("September have 30 days. \n");
        break;

    case 10:
        printf("October have 31 days. \n");
        break;

    case 11:
        printf("November have 30 days. \n");
        break;

    case 12:
        printf("December have 31 days. \n");
        break;

    default:
        printf("%d is don\'t match with the month number! \n", n);
    }

return 0;
}
