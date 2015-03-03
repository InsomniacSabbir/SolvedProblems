#include<stdio.h>
int main()
{
    int T,a,n,s,b,max=0;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        max=0;
        scanf("%d",&n);
        for(b=0;b<n;b++)
        {
            scanf("%d",&s);
            if(s>max){max=s;}
        }
        printf("Case %d: %d\n",a,max);
    }
}
