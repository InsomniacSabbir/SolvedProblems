#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int tCase,nCase;
    double a,b,i,j,ans,pi=acos(0.0);

    scanf("%d",&tCase);

    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%lf%lf",&i,&j);
        a=j/2;
        b=i/2;
        ans=sqrt((a*a)-(b*b));
        ans=2*a*pi*ans;
        printf("%.3lf\n",ans);
    }
    return 0;
}
