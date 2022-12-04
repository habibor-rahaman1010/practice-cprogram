// type casting in c program...

#include <stdio.h>

int main() {

    int a;
    double b;
    char c;

    a = (int)25 / 2.0;
    printf("%d \n", a);

    b = (double)25 / 2.0; //type casting...
    printf("%lf \n", b);


    int x = 45;
    double y = 67.8;

    int *ptr1;
    double *ptr2;

    ptr1 = &x;
    ptr2 = (double*)ptr1;

    printf("%d %lf \n", *ptr1, *ptr2);
    printf("%p %p \n", ptr1, ptr2);

}
