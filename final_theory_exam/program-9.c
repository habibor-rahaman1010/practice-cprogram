#include<stdio.h>

struct Point{
    int x;
    int y;
};

int main() {
    struct Point p1 = {12, 16};
    struct Point *p2 = &p1;
    p2->x = 14;
    printf ("x = %d, y = %d", p2->x, p2->y);

return 0;
}

