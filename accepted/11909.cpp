#include<stdio.h>
#include<math.h>
#include<string.h>
#define pi acos(-1)

int main()
{
    double l,w,h,vol,nvol,net,d,hi;
    while(scanf("%lf%lf%lf%lf",&l,&w,&h,&d)==4)
    {
        vol=w*h*l;
        hi=tan(d*(pi/180))*l;
        if(hi<=h)
        {
            nvol=hi*(0.5)*l*w;
            net=vol-nvol;
        }
        else
        {
            hi=tan((90-d)*(pi/180))*h;
            nvol=hi*.5*h*w;
            net=nvol;
        }
        printf("%.3lf mL\n",net);
    }
    return 0;
}
