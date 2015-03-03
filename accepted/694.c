#include<stdio.h>
int main()
{
    long long int L,N,A,b,c,d,e,f,g,h=1,j,i=1,max,n;
    while(i!=0)
    {
        int flag=1;
        scanf("%lld %lld",&n,&L);
        N=n;
        if(N==-1&&L==-1){i=0;}
        else
        {
            for(b=1;N!=1;b++)
            {
                if(N%2==0)
                {
                    N=N/2;
                }
                else if(N%2!=0)
                {
                    N=(3*N)+1;
                    if(N>L){N=1;flag=0;}
                    else{}
                }
            }
            if(flag==0)
            {
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",h,n,L,b-1);
        }
        else
        {
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",h,n,L,b);
        }
        }
        h++;
    }
}
