//xoss pattern in c program...

#include <stdio.h>
int main()
{
    int i, j, N;
    int k = 0;

    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=i; j<=N; j++)
        {
            if(i==1 || i==N || j==i)
                printf("%d", j);
            else
                printf(" ");
        }

        k = N ;
        for(j=1; j<i; j++)
        {
            if(i==1 || i==N || j==i-1)
                printf("%d", k);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
