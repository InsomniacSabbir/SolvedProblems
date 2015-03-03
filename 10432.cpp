#include<stdio.h>
#include<math.h>
#include<string.h>
#define pi acos(-1)

int main()
{
    double n,r,ans;
    {
        while(scanf("%lf%lf",&r,&n)==2)
        {
            ans=(n*(r*r))/2*sin((2*pi)/n);
            printf("%.3lf\n",ans);
        }
    }
    return 0;
}
