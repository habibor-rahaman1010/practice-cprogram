//Write a C program to check whether a character is an alphabet, digit or special character

#include <stdio.h>

int main() {
    char character;
    printf("Enter value of character: ");
    scanf("%c", &character);

    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        printf("This is an alphabet. \n");
    }
    else if(character >= '0' && character <= '9'){
        printf("This is a digit. \n");
    }
    else{
        printf("This is a special character. \n");
    }


return 0;
}
