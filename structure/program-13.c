// mid point find in c program use structure...

#include <stdio.h>

struct Point {
    float x;
    float y;
};

struct Point mid(struct Point m, struct Point n) {
    struct Point ans;
    ans.x = (m.x + n.x) / 2;
    ans.y = (m.y + m.y) / 2;
    return ans;
};

int main() {
    struct Point p1;
    struct Point p2;

    printf("Enter the value of (x and y): ");
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

    struct Point result;
    result = mid(p1, p2);

    printf("mid point is: %0.2f %0.2f \n", result.x, result.y);

return 0;
}
