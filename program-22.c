//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include <stdio.h>

int main() {
    int sidea, sideb, sidec;
    printf("Enter the value off all thouse side: ");
    scanf("%d %d %d", &sidea, &sideb, &sidec);

    if(sidea == sideb && sideb == sidec){
        printf("This is an equilateral triangle.\n");
    }
    else if(sidea == sideb || sidea == sidec || sideb == sidec){
        printf("This is an isosceles triangle.\n");
    }
    else{
        printf("This is a scalene triangle.\n");
    }

return 0;
}
