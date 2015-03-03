#include<stdio.h>
long long int f91(long long int n)
{
    if(n>=101){return n-10;}
    else
    {
        return f91(f91(n+11));
    }
}
int main()
{
    long long int a=1,n,ans;
    while(a!=0)
    {
        scanf("%lld",&n);
        if(n==0){a=0;}
        else
        {
            ans=f91(n);
            printf("f91(%lld) = %lld\n",n,ans);

        }
    }
    return 0;
}
