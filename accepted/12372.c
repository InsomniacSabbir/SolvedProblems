#include<stdio.h>
int main()
{
    int T,L,W,H,a;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%d%d%d",&L,&W,&H);
        if(L<=20&&L>=1&&W<=20&&W>=1&&H<=20&&H>=1)
        {
            printf("Case %d: good\n",a);
        }
        else
        printf("Case %d: bad\n",a);
    }
    return 0;
}
