//Write a program in C to read any digit, display in the word.

#include <stdio.h>

int main() {
    int number;
    printf("Enter the value of decimal number: ");
    scanf("%d", &number);

    if(number == 1){
        printf("One \n");
    }
    else if(number == 2){
        printf("Two \n");
    }
    else if(number == 3){
        printf("Three \n");
    }
    else if(number == 4){
        printf("Four \n");
    }
    else if(number == 5){
        printf("Five \n");
    }
    else if(number == 6){
        printf("Six \n");
    }
    else if(number == 7){
        printf("Seven \n");
    }
    else if(number == 8){
        printf("Eight \n");
    }
    else if(number == 9){
        printf("Nine \n");
    }
   else{
    printf("%d is not a valid number! please enter (0 to 9) \n", number);
   }

return 0;
}
