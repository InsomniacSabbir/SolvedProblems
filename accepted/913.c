#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,j,ans=0,s,odd;
    while(scanf("%lld",&a)!=EOF)
    {
        ans=0;odd=0;s=0;d=0;
            if(a>1&&a%2!=0)
            {
            d=(a+1)/2;
            if(d%2==0){s=(d/2)*(a+1);}
            else {s=((d-1)/2)*(a+1)+d;}
            odd=(2*s)-1;
            ans=(odd)+(odd-2)+(odd-4);
            }
            else if (a==1){ans=1;}
            printf("%lld\n",ans);

    }
    return 0;
}
