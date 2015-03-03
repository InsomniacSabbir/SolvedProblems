#include<stdio.h>
#include<math.h>

int main()
{
    long long int i,j,n,end,start,value,x,y,flag;
    float q;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        flag=0;
        end=(int)sqrt(n);
        q=(float)1/3;
        start=(int)pow(n,q);
        for(i=start;i<=end;i++)
        {
            for(j=1;j<=i;j++)
            {
                value=(i*i*i)-(j*j*j);
                if(value==n)
                {
                    x=i;
                    y=j;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("%lld %lld\n",x,y);
        }
        else
        {
            printf("No solution\n");
        }
    }
    return 0;
}
