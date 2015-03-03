#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    int a,b,c,l,t;
    double red,green,f,r,area,w;
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
        scanf("%d",&l);
        w=((double)(l)/(double)(10))*6.00;
        area=(double)(l)*w;
        r=((double)(l)/(double)(5));
        red=(pi*r*r);
        green=area-red;
        printf("%.2lf %.2lf\n",red,green);

    }
    return 0;
}
