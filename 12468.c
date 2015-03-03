#include<stdio.h>
int main()
{
    long long int a,b,c,d=1,e;
    while(d!=0)
    {
        scanf("%lld%lld",&a,&b);
        if(a==-1&&b==-1){d=0;}
        else if(a>=0&&a<=99&&b>=0&&b<=99)
        {
            if(a>b)
            {
                c=a-b;
                e=(b+100)-a;
            }
            else if(a<b)
            {
                c=b-a;
                e=(a+100)-b;
            }
            else if(a==b){c=0;e=1;}
            if(c>e){printf("%lld\n",e);}
            else if(c<=e){printf("%lld\n",c);}
        }
    }
}
