#include<stdio.h>
int main()
{
    int n,P,Q,str[100],a,b,c,d,e,f,T;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        int sum=0,count=0;int temp=0,s=1;
        scanf("%d %d %d",&n,&P,&Q);
        for(b=0;b<n;b++)
        {
            scanf("%d",&str[b]);
            sum=str[b]+sum;
        }
        if(sum<=Q&&n<=P){printf("Case %d: %d\n",a,n);}
        else
        {
            for(b=0;s!=0;b++)
            {
                temp=temp+str[b];
                count++;
                if(temp>Q){count=count-1;s=0;}
                else if(count==P){s=0;}
            }
           printf("Case %d: %d\n",a,count);
        }

    }
}
