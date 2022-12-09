#include<stdio.h>

struct Point{
    int x;
    int y;
};

int main() {
    struct Point p1 = {12, 16};
    p1.x = 14;
    printf ("x = %d, y = %d", p1.x, p1.y);

return 0;
}
