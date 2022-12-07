//manhattan distance in c program...

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

int manhattan(struct point p1, struct point p2){
    int result = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return result;
}

int main() {
    printf("Enter the value of (x and y): ");
    struct point poin;
    struct point poin2;

    scanf("%d %d", &poin.x, &poin.y);
    scanf("%d %d", &poin2.x, &poin2.y);

    int ans = manhattan(poin, poin2);
    printf("manhattan distance is: %d \n", ans);

return 0;
}
