#include<stdio.h>
#include<math.h>
#include<string.h>

int fib[5100][10200];

int main()
{
    int N,i,j,k,l,nCase,tCase;
    fib[0][0]=1;
    fib[1][0]=2;
    fib[2][0]=3;
    for(i=3;i<=5050;i++)
    {
        for(j=0;j<=10099;j++)
        {
            fib[i][j]+=fib[i-1][j]+fib[i-2][j];
            //printf("i=%d\tj=%d\tfib[i][j]=%d\n",i,j,fib[i][j]);

            fib[i][j+1]=fib[i][j]/10;
            fib[i][j]=fib[i][j]%10;
        }
    }
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%d",&N);
        printf("Scenario #%d:\n",nCase);
        if(N==0)
		{
			printf("0\n");
			continue;
		}
        for(j=10099;;j--)
        {
            if(fib[N][j])
            {
                break;
            }
        }

        for(;j>=0;j--)
        {
            printf("%d",fib[N][j]);
        }
        printf("\n\n");
    }
    return 0;
}

