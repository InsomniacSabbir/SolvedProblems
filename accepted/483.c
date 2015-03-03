#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,e;
    char ch,str[10000];
    while(gets(str))
    {
        c=0;b=0;
    for(a=0;str[a]!='\0';a++)
    {
        if(str[a]==' ')
        {
            for(b=a-1;b>=c;b--)
            {
                printf("%c",str[b]);
            }
            printf(" ");c=a+1;
        }

    }
    for(e=a-1;e>=c;e--)
    {
        printf("%c",str[e]);
    }
    printf("\n");

    }
    return 0;
}
