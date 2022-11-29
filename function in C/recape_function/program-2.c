// triangle radius in c program...

#include <stdio.h>

int take_radius() {
    int r;
    printf("Enter the radius of a circle: ");
    scanf("%d", &r);
    return r;
}

int main() {
    int r;
    r = take_radius();

    float area = 3.1416 * r * r;
    printf("%0.2f", area);

return 0;
}
