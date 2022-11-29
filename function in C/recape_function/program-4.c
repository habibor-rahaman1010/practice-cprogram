// triangle radius in c program...

#include <stdio.h>

int take_radius() {
    int r;
    printf("Enter the radius of a circle: ");
    scanf("%d", &r);
    return r;
}

void calculate(int r) {
    float area =  (3.1416 * r * r);
    printf("%0.2f", area);

}

int main() {
    int r;
    r = take_radius();

    calculate(r);

return 0;
}


