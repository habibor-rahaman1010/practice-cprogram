//Write a program in C to accept a grade and declare the equivalent description

#include <stdio.h>

int main() {
    char ch;
    printf("Enter the value of ch: (E, V, G, A, F): ");
    scanf("%c", &ch);

    if(ch == 'E' || ch == 'e'){
        printf("Excellent \n");
    }
    else if(ch == 'V' || ch == 'v'){
        printf("Very Good \n");
    }
    else if(ch == 'G' || ch == 'e'){
        printf("Good \n");
    }
    else if(ch == 'A' || ch == 'a'){
        printf("Average \n");
    }
    else if(ch == 'F' || ch == 'f'){
        printf("Fail \n");
    }
    else{
        printf("Invalid Grade Found. \n");
    }

return 0;
}
