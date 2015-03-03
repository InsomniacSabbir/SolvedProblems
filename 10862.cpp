#include<stdio.h>
#include<math.h>
#include<string.h>

int fib[5100][10000];

int main()
{
    int N,i,j,k,l;
    fib[0][0]=1;
    fib[1][0]=1;
    fib[2][0]=2;
    for(i=3;i<=5003;i++)
    {
        for(j=0;j<=9999;j++)
        {
            fib[i][j]+=fib[i-1][j]+fib[i-2][j];
            //printf("i=%d\tj=%d\tfib[i][j]=%d\n",i,j,fib[i][j]);

            fib[i][j+1]=fib[i][j]/10;
            fib[i][j]=fib[i][j]%10;
        }
    }

    while(scanf("%d",&N)==1&&N!=0)
    {
        for(j=9999;;j--)
        {
            if(fib[N+N-1][j])
            {
                break;
            }
        }

        for(;j>=0;j--)
        {
            printf("%d",fib[N+N-1][j]);
        }
        printf("\n");
    }
    return 0;
}

