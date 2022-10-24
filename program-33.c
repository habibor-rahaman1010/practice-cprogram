//Write a program in C to read any Month Number in integer and display Month name in the word.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number which between (1 to 12): ");
    scanf("%d", &n);

    switch(n){
    case 1:
        printf("January. \n");
        break;

    case 2:
        printf("February");
        break;

    case 3:
        printf("March. \n");
        break;

    case 4:
        printf("April. \n");
        break;

    case 5:
        printf("May \n");
        break;

    case 6:
        printf("June. \n");
        break;

    case 7:
        printf("July. \n");
        break;

    case 8:
        printf("August. \n");
        break;

    case 9:
        printf("September. \n");
        break;

    case 10:
        printf("October. \n");
        break;

    case 11:
        printf("November. \n");
        break;

    case 12:
        printf("December. \n");
        break;

    default:
        printf("%d is don\'t match with the month number! \n", n);
    }

return 0;
}
