#include<stdio.h>
int main()
{
    long long int a,b,N,c,d;
    while(scanf("%lld",&N)==1&&N!=-1)
    {
        a=0;b=1;
        for(d=1;d<=N;d++)
        {
            c=a;
            a=b;
            b=(a+c)+1;
        }
        printf("%lld %lld\n",a,b);
    }
}
