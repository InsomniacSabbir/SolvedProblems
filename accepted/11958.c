#include<stdio.h>
int main()
{
    int T,n,H,M,h[100],m[100],time[100],a,b,temp,temp1,temp2;
    char ch;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        int min=999999999;
        scanf("%d %d%c%d",&n,&H,&ch,&M);
        for(b=1;b<=n;b++)
        {
            scanf("%d%c%d %d",&h[b],&ch,&m[b],&time[b]);
        }
        for(b=1;b<=n;b++)
        {
            temp1=(H*60)+M;
            temp2=(h[b]*60)+m[b];
            temp=temp2-temp1;
            if(temp<0){temp=temp+(24*60);}
            temp=temp+time[b];
            if(temp<min){min=temp;}
        }
        printf("Case %d: %d\n",a,min);
    }
}

