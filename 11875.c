#include<stdio.h>
int main()
{
    int T,a,age[100],mem,b,i,j;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%d",&mem);
        for(b=1;b<=mem;b++)
        {
            scanf("%d",&age[b]);
        }
        i=(mem+1)/2;
        printf("Case %d: %d\n",a,age[i]);
    }
}
