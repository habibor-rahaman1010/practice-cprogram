//You are given two integer x and y. Now you have to find the average of this two integer. Implement this by using pointers.

#include <stdio.h>

int main() {
    int num1, num2;
    float avg = 0;

    printf("Enter the value of num1 and num2: ");

    int *p1 = &num1, *p2 = &num2;
    float *p3 = &avg;
    scanf("%d %d", p1, p2);

    *p3 = (*p1 + *p2) / 2.0;
    printf("%0.2f \n", *p3);

return 0;

}

