#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct Hotel
{
    long long int price;
    long long int Space[1000];
}Hotel;

int main()
{
    Hotel ob[100];
    long long int N,W,B,i,j,flag,k,temp,H,cost,minimum,tempPrice;
    while(scanf("%lld%lld%lld%lld",&N,&B,&H,&W)==4)
    {
        cost=0;
        minimum=500005;
        for(j=1;j<=H;j++)
        {
            scanf("%lld",&ob[j].price);
            for(i=1;i<=W;i++)
            {
                scanf("%lld",&ob[j].Space[i]);
            }
        }
        for(j=1;j<=W;j++)
        {
            for(i=1;i<=H;i++)
            {
                if(ob[i].Space[j]>=N)
                {
                    tempPrice=ob[i].price*N;
                    if(tempPrice<minimum&&tempPrice<=B)
                    {
                        minimum=tempPrice;
                    }
                }
            }
            cost=minimum;
        }
        if(cost<=B)
        {
            printf("%lld\n",cost);
        }
        else
        {
            printf("stay home\n");
        }
    }
    return 0;
}
