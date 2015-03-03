#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int N,L,U,maxval,maxfreq,tCase,nCase,counter,i,j,temp;
    scanf("%lld",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        maxfreq=0,maxval=0;
        scanf("%lld %lld",&L,&U);
        for(i=L;i<=U;i++)
        {
            counter=0;
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0){counter+=2;}
            }
            temp=sqrt(i);
            if(temp*temp==i)
            {
                counter--;
            }
            if(counter>maxfreq)
            {
                maxfreq=counter;
                maxval=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,U,maxval,maxfreq);
    }
    return 0;
}
