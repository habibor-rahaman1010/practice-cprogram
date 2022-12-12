#include<stdio.h>
int foo(int n)
{
    if(n==0)
        return 0;
    return foo(n-1)+n;
}
int main()
{
    printf("%d\n",foo(6));
    return 0;
}
