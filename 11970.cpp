#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int tCase,nCase,N,X[1000],i,j,k,temp;
    scanf("%lld",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(X,0,sizeof(X));
        scanf("%lld",&N);
        j=0;
        for(i=1;i<=sqrt(N);i++)
        {
            if(N%i==0)
            {
                temp=i*i;
                if(temp<N)
                {
                    j++;
                    X[j]=temp;
                }
            }
        }
        printf("Case %lld:",nCase);
        for(k=j;k>=1;k--)
        {
            printf(" %lld",N-X[k]);
        }
        printf("\n");
    }
    return 0;
}
