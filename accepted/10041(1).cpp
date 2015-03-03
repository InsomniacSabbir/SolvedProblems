#include<stdio.h>
#include<math.h>
int abs(int n)
{
    if(n>=00)return n;
    else return (-n);
}

int main()
{
    int tCase,nCase,N,i,j,temp,str[10000],ans;

    scanf("%d",&tCase);

    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            scanf("%d",&str[i]);
        }

        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
            {
                if(str[j]<str[i])
                {
                    temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                }
            }
        }
        if(N%2==0)
        {
            ans=N/2;
        }
        else
        {
            ans=(N+1)/2;
        }

        int count=0;
        for(i=1;i<=N;i++)
        {
            count+=abs(str[ans]-str[i]);
        }
        printf("%d\n",count);
    }

    return 0;
}
