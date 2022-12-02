//You are given an R, the radius of a circle. Now your task to find the area of that circles. Implement this by using function.

#include <stdio.h>

float area(int radius) {
    return (3.1416 * (radius * radius));
}

int main() {
    int radius;
    printf("Enter the value of area: ");
    scanf("%d", &radius);

    float ans = area(radius);
    printf("Area of circle is: %0.2f \n", ans);

return 0;
}
