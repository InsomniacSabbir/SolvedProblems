#include<stdio.h>
#include<math.h>

int main()
{
    long long int T,n,num,i,j,a,b,c,d,k;
    scanf("%lld",&T);
    for(n=1;n<=T;n++)
    {
        scanf("%lld",&num);

            for(j=2;j<=sqrt(num);j++)
            {
                if(num%j==0)
                {
                    a=j;b=(num/j);

                    break;
                }
            }
            for(j=a+1;j<=sqrt(num);j++)
            {
                if(num%j==0)
                {
                    c=j;d=(num/j);
                    break;
                }
            }
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",n,num,a,b,c,d);

    }
    return 0;
}
