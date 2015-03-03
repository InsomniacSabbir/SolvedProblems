#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
long long int sum,ssum;
void Dgen(long long int n)
{
    sum=0;
    ssum=0;
    long long int i,m;
    for(i=1;i<=sqrt(n+1);i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
            {
                sum+=2;
                ssum+=(i+n/i);
            }
            else
            {
                sum++;
                ssum+=i;
            }
        }
    }
}


int main()
{
    //D[1]=1;
    //Dgen();
    //Sgen();
    long long int i,nCase,tCase,a,b,k,n;
    scanf("%lld",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        long long int dsum=0,sssum=0;
        scanf("%lld%lld%lld",&a,&b,&k);
        sum=0;
        ssum=0;
        for(i=a;i<=b;i++)
        {

            if(i%k==0)
            {
                Dgen(i);
                dsum+=sum;
                sssum+=ssum;
            }
        }
        printf("%lld %lld\n",dsum,sssum);
    }
    return 0;
}
