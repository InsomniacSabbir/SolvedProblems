#include<stdio.h>
#include<math.h>


long long int fib(long long int n)
{
    long long int sum=0,fib[10000],i=3,c;
    fib[0]=1;
    fib[1]=1;
    fib[2]=2;
    while(i<=n)
    {
        fib[i]=fib[i-1]+fib[i-2];
        i++;
    }
    return fib[n];
}

int main()
{
    long long int n,i,ans;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        ans=fib(n);

        printf("%lld\n",ans);
    }
    return 0;
}
