#include<stdio.h>
int main()
{
    long long int a,b=1,n,c;
    while(b!=0)
    {
        c=0;
        scanf("%lld",&n);
        if(n<0){b=0;}
        else
        {
            c=(n*(n+1))/2+1;
            printf("%lld\n",c);
        }

    }
}
