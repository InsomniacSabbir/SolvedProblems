#include<stdio.h>
#include<string.h>
int main()
{
    int G,a,b=1,c,d,e;
    char str[150];
    while(b!=0)
    {
        scanf("%d",&G);
        if(G==0){b=0;}
        else
        {
            scanf("%s",&str);
            c=strlen(str)/G;
            for(d=0;d<strlen(str);d=d+c)
            {
                for(e=d+c-1;e>=d;e--)
                {
                    printf("%c",str[e]);
                }
            }
            printf("\n");
        }
    }
}
