#include<stdio.h>
int main()
{
    int a,b,T,arr[10000],n,countt,i,j;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        countt=0;
        scanf("%d",&n);
        for(b=1;b<=n;b++)
        {
            scanf("%d",&arr[b]);
        }
        for(i=2;i<=n;i++)
        {
            for(j=1;j<=i-1;j++)
            {
                if(arr[i]>=arr[j]){countt++;}
            }
        }
        printf("%d\n",countt);
    }
    return 0;
}
