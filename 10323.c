#include<stdio.h>
int main()
{
    long long int n,ans,a;
    while(scanf("%lld",&n)!=EOF)
    {
        ans=1;
        if(n>=8&&n<=13)
        {
            for(a=1;a<=n;a++)
            {
                ans=ans*a;
            }
            printf("%lld\n",ans);
        }
        else if(n<8&&n>0){printf("Underflow!\n");}
        else if(n>13){printf("Overflow!\n");}
         else{
            long long int m = -1*n;
            if(m%2!=0){
                printf("Overflow!\n");
            }
            else printf("Underflow!\n");
        }
    }
}
