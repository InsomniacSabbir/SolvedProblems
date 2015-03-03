#include<math.h>
#include<stdio.h>

int fact[1001][2600];

void factorial()
{
    fact[0][0]=1;
    fact[1][0]=1;
    int i,j;
    for(i=2;i<1001;i++)
    {
        for(j=0;j<2600;j++)
        {
            fact[i][j]+=(fact[i-1][j]*i);
            if(fact[i][j]>9)
            {
                fact[i][j+1]=fact[i][j]/10;
                fact[i][j]=fact[i][j]%10;
            }
        }
    }
}
int main()
{
    factorial();
    int i,n;
    while(scanf("%d",&n)==1)
    {
        for(i=2599;i>0;i--)
        {
            if(fact[n][i]!=0)break;
        }
        int sum=0;
        for(;i>=0;i--)
        {
            sum+=fact[n][i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
