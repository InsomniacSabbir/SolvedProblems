#include<stdio.h>
long long ncm(long long n,long long m)
{
    long long res=1,i;
        if(n-m<m)
        m=n-m;
        for(i=1;i<=m;i++,n--)
        {
            res=res*n;
            res=res/i;
        }
        return res;
}
int main(){
	long long n,m,mm;
	while(scanf("%lld%lld",&n,&m)==2)
	{
	    mm=m;
	    if(n==0&&m==0)
        break;

   printf("%lld\n",ncm(n,m));
	}


	return 0;
	}
