#include<stdio.h>
int main()
{
    int h,m,a=0,b;
    float temph,tempm,ans1,ans2,ans;
    while(a!=1)
    {
        scanf("%d:%d",&h,&m);
        if(h==0){a=1;}
        else
        {
        temph=(float)(((float)(h)*30.00)+((float)(m)*.5));
        tempm=(float)(6.00*(float)(m));
        if(temph>=tempm){ans=temph-tempm;}
        else{ans=tempm-temph;}

        if(ans>180){ans=360-ans;}
        else{}
        printf("%.3f\n",ans);
        }
    }
}
