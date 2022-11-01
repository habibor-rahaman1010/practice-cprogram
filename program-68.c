//array in c program...

#include <stdio.h>

int main() {

    int arr[10];

    arr[0] = 34;
    arr[1] = 56;
    arr[2] = 86;
    arr[3] = 78;
    arr[4] = 98;

    printf("%d \n", arr[0]);
    printf("%d \n", arr[1]);
    printf("%d \n", arr[2]);
    printf("%d \n", arr[3]);
    printf("%d \n", arr[4]);

    //unassign value print in array...that so why get garbage value....
    printf("%d \n", arr[10]);
    printf("%d \n", arr[8]);

return 0;
}
