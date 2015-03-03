#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int e,s,w,n,u,d,temp,dir,i;
    char str[100];

    while(scanf("%d",&dir)==1&&dir!=0)
    {
        u=1;d=6;n=2;s=5;e=3;w=4;

        for(i=1;i<=dir;i++)
        {
            scanf("%s",&str);
            if(strcmp(str,"north")==0)
            {
                temp=u;
                u=s;
                s=d;
                d=n;
                n=temp;
            }
            else if(strcmp(str,"south")==0)
            {
                temp=u;
                u=n;
                n=d;
                d=s;
                s=temp;
            }
            else if(strcmp(str,"east")==0)
            {
                temp=u;
                u=e;
                e=d;
                d=w;
                w=temp;
            }
            else if(strcmp(str,"west")==0)
            {
                temp=u;
                u=w;
                w=d;
                d=e;
                e=temp;
            }

        }
        printf("%d\n",u);
    }
    return 0;
}
