#include<stdio.h>

int main()
{
    long long int x,p,q,k,tCase,nCase;
    scanf("%lld",&tCase);

    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%lld%lld",&x,&k);
        if(x%k==0)
        {
            p=0;
            q=k;
        }
        else
        {
            p=-x;
            q=x;
        }
        printf("%lld %lld\n",p,q);
    }
    return 0;
}
