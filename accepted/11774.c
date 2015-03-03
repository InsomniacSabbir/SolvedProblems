#include<stdio.h>
int main()
{
    int T,a;
    long long unsigned ans,m,n,d,c;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%llu %llu",&n,&m);
         d=n+m;
        do
        {
            c=n;
            n=m%n;
            m=c;
        }
        while(n!=0);
        printf("Case %d: %llu\n",a,d/c);
    }
    return 0;
}

