#include<stdio.h>
#include<string.h>

int main()
{
    int N,sum,j,i;
    char str[100000];
    while(scanf("%d",&N)==1&&N!=0)
    {
        sum=0;
        for(i=1;i<=N;i++)
        {
            scanf("%d",&j);
            sum=sum^j;

        }
        if(sum==0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
