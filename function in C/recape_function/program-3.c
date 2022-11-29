// triangle radius in c program...

#include <stdio.h>

int take_radius() {
    int r;
    printf("Enter the radius of a circle: ");
    scanf("%d", &r);
    return r;
}

int calculate(int r) {
    return (3.1416 * r * r);
}

int main() {
    int r;
    r = take_radius();

    float area = calculate(r);
    printf("%0.2f", area);

return 0;
}

