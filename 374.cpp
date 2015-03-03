#include<stdio.h>
#include<math.h>
#include<string.h>
#define square(x) x*x

long long bigmod(long long b,long long p,long long m)
{
    if(p==0)
    {
        //printf("1\n");
        return 1;
    }
    else if(p%2==0)
    {
        //printf("%lld\n",square(bigmod(b,p/2,m))%m);
        return square(bigmod(b,p/2,m)%m)%m;
    }
    else
    {
        //printf("%lld\n",((b%m)*bigmod(b,p-1,m))%m);
        return ((b%m)*bigmod(b,p-1,m)%m)%m;
    }
}

int main()
{
    long long b,p,m,res;
    while(scanf("%lld%lld%lld",&b,&p,&m)==3)
    {
        res=bigmod(b,p,m);
        printf("%lld\n",res);
    }
    return 0;
}
