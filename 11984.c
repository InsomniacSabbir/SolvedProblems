#include<stdio.h>
int main()
{
    int T,a,C,d,F;
    float ans;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        ans=0;
        scanf("%d%d",&C,&d);
        ans=(float)(C+(d*(1/1.8)));
        printf("Case %d: %.2f\n",a,ans);

    }
}
