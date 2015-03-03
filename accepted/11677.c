#include<stdio.h>
int main()
{
    long long H,M,h,m,ans;
    while(scanf("%lld %lld %lld %lld",&H,&M,&h,&m)==4&&(H!=0||M!=0||h!=0||m!=0))
    {
        H=H*60+M;
        h=h*60+m;
        if(h>H){ans=h-H;}
        else
        {
            h=h+(24*60);
            ans=h-H;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
