//try angle area find out in c program...

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the value of (a, b, and c): ");
    scanf("%d %d %d", &a, &b, &c);

    double s, area;
    s = (a + b + c) / 2.0;
    area = s * (s - a) * (s - b) * (s - c);
    area = sqrt(area);
    printf("Area is: %0.2lf \n", area);

return 0;
}
