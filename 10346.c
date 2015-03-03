#include<stdio.h>
int main()
{
    int n,k,ans,temp,sum;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        if(n>=0&&k>1)
        {
        ans=n;temp=k;
        while(temp>=k)
        {
            temp=n/k;
            ans=ans+temp;
            temp=temp+(n%k);
            n=temp;

        }
        printf("%d\n",ans);
        }
    }
    return 0;
}
