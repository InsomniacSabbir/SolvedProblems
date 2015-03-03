#include<stdio.h>
#include<math.h>
#include<string.h>

int fib[5100][10009];

int main()
{
    int N,i,j,k,l;
    fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=1;
    for(i=3;i<=5010;i++)
    {
        for(j=0;j<=10000;j++)
        {
            fib[i][j]+=fib[i-1][j]+fib[i-2][j];

            fib[i][j+1]=fib[i][j]/10;
            fib[i][j]=fib[i][j]%10;
        }
    }

    while(scanf("%d",&N)==1)
    {
        for(j=10000;;j--)
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
        printf("\n");
    }
    return 0;
}


