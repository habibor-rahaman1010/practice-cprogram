#include<stdio.h>

void checkNumber(int n)
{
      int x,a,b,c,d;
        x=(n/4);
        a=x-3;
        b=x-1;
        c=x+1;
        d=x+3;
        printf("%d %d %d %d\n",a,b,c,d);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
      int n;
        scanf("%d",&n);
        checkNumber(n);
    }
}
