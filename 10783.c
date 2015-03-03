#include<stdio.h>
int main()
{
    int t,a,b,c,d,e;
    scanf("%d",&t);
    for(c=1;c<=t;c++)
    {
        scanf("%d%d",&a,&b);
        d=0;
        for(e=a;e<=b;e++)
        {
            if(e%2!=0){d=d+e;}
        }
        printf("Case %d: %d\n",c,d);
    }
}
