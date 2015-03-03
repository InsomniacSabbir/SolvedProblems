#include<stdio.h>
#include<string.h>
#include<math.h>

int isPrime(int n)
{
    int i,flag=1;
    if(n==1)return 0;
    else if(n==2||n==3)return 1;
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){flag=0;break;}
        }
        return flag;
    }
}

int main()
{
    int N,i,j,ans,pair;
    while(scanf("%d",&N)==1&&N!=0)
    {
        int flag=0;
        for(j=N-1;j>=sqrt(N);j--)
        {
            ans=isPrime(j);
            if(ans==1)
            {
                pair=N-j;
                if(pair%2==0)
                {
                    continue;
                }
                else
                {
                    ans=isPrime(pair);
                    if(ans==1)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        printf("%d = %d + %d\n",N,pair,j);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
