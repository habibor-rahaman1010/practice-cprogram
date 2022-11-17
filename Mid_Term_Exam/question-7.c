#include <stdio.h>
#include <string.h>

int main()
{
    char s[102], t[102];
    int i;
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int len = strlen(s) - 1;

    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;

        if (t[i] >= 'A' && t[i] <= 'Z')
            t[i] = t[i] + 32;
    }

    for (i = 0; i < len; i++)
    {
        if (s[i] < t[i])
        {
            printf("-1\n");
            return 0;
        }
        else if (s[i] > t[i])
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="cta";
    int length=strlen(a);
    char temp;

    for(int i=0;i<length-1;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
}
