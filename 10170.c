#include<stdio.h>
int main()
{
    long long s,d,ans,a,l;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        ans=0;
        for(a=s;a<=d;a++)
        {
            ans=ans+a;
            if(ans>=d){break;}
        }
        printf("%lld\n",a);
    }
}
