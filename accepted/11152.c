#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double a,b,c,area,yel,vio,red,s,ry,rr;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        ry=(a*b*c)/(4*area);
        rr=area/s;
        yel=(pi*ry*ry)-area;
        red=rr*rr*pi;
        vio=area-red;
        printf("%.4lf %.4lf %.4lf\n",yel,vio,red);

    }


}
