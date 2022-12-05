// pointer in c program...

#include <stdio.h>
int main()
{
    int a = 10;
    int *p=&a;
    int **q=&p;
    **q=22;
    printf("%d", a);
    return 0;
}
