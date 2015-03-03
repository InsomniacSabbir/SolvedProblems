#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,ans,s,x;
    while( scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2.000;
        x=sqrt(s*(s-a)*(s-b)*(s-c));
        ans=((4.000*x)/3.000);
        if(ans>0){printf("%.3lf\n",ans);}
        else {printf("-1.000\n");}
    }
    return 0;
}
