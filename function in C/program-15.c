// Nested function in c program....

#include <stdio.h>
#include <math.h>

float f(int a, int b);
int absolute(int n);
int squear(int m);

int main() {
    int x, y;
    printf("Enter the value of (x and y): ");
    scanf("%d %d", &x, &y);

    float ans = f(x, y);
    printf("%f", ans);


return 0;
}


float f(int a, int b){
    int tampans = absolute(a) + squear(b);
    return sqrt(tampans);
}

int absolute(int n){
    if(n >= 0){
        return n;
    }
    else{
        return (-1) * n;
    }
}

int squear(int m){
    return (m + 4) * (m + 4);
}
