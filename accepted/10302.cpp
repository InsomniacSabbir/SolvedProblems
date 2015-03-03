#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int x,i,j,sum;
    while(scanf("%lld",&x)==1)
    {
        sum=((x*(x+1))/2)*((x*(x+1))/2);
        printf("%lld\n",sum);
    }
    return 0;
}
