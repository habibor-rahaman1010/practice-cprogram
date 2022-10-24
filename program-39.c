//examination grade system in c program...

#include <stdio.h>

int main() {
    int subject;
    printf("Enter the value of subject: ");
    scanf("%d", &subject);

    if(subject >= 80 && subject <= 100){
        printf("The grade is: A+ \n");
    }

    else if(subject >= 70 && subject <= 79){
        printf("The grade is: A \n");
    }

    else if(subject >= 60 && subject <= 69){
        printf("The grade is: A- \n");
    }

    else if(subject >= 50 && subject <= 59){
        printf("The grade is: B \n");
    }

    else if(subject >= 40 && subject <= 49){
        printf("The grade is: C \n");
    }

    else if(subject >= 33 && subject <= 39){
        printf("The grade is: D \n");
    }
    else{
        printf("The grade is: F \n");
    }


return 0;
}
