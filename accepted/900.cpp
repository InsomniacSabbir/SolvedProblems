#include<stdio.h>
#include<math.h>
#include<string.h>

long long int fibonacci[100];

void fib()
{
    int j;
    fibonacci[0]=1;
    fibonacci[1]=1;
    for(j=2;j<=50;j++)
    {
        fibonacci[j]=fibonacci[j-1]+fibonacci[j-2];
    }
}


int main()
{
    memset(fibonacci,0,sizeof(fibonacci));
    fib();
    long long int N;
    while(scanf("%lld",&N)==1&&N!=0)
    {
        printf("%lld\n",fibonacci[N]);
    }

    return 0;
}
