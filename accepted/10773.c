#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi acos(-1)
int main()
{
    double d,v,u,a,b,c,high,low,ans;
    int n,T;
    scanf("%d",&T);
    for(n=1;n<=T;n++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        c=sqrt((u*u)-(v*v));
        low=d/c;
        high=d/u;
        ans=low-high;
        if((v>=u)||(u==0)||(v==0)){printf("Case %d: can't determine\n",n);}
        else
        {
            printf("Case %d: %.3lf\n",n,ans);
        }
    }
}
