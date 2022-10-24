//Write a C program to check whether a triangle can be formed by the given value for the angles.

#include <stdio.h>

int main() {
    int ang1, ang2, ang3, sum;
    printf("Input three angles of triangle: ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);

    sum = (ang1 + ang2 + ang3);
    if(sum == 180){
        printf("The triangle is valid. \n");
    }
    else{
        printf("The triangle is not valid. \n");
    }

return 0;
}
