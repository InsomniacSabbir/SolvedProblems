#include<stdio.h>
#include<math.h>
#include<string.h>

long long int N=1000005;
long long int ans[1000005];

int main()
{
    long long int n,i;
    ans[0]=ans[1]=ans[2]=0;
    for(i=3;i<N;i++)
    ans[i]=ans[i-1]+((i-1)*(i-2)/2-(i-1)/2)/2;

    while(scanf("%lld",&n)&&n>2)
    {
        printf("%lld\n",ans[n]);
    }
    return 0;
}
