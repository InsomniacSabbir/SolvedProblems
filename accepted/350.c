#include<stdio.h>
int main()
{
    int Z,M,I,L,a=1,ans,i=1,c,x=0;
    while(i!=0)
    {
        scanf("%d %d %d %d",&Z,&I,&M,&L);
        if(Z==0&&M==0&&I==0&&L==0){i=0;}
        else
        {
            ans=L;
            ans=(Z*ans)+I;
            ans=ans%M;
            L=ans;
            for(c=0;x!=L;c++)
            {
            ans=(Z*ans)+I;
            ans=ans%M;
            if(ans==L){x=L;}
            else{x=0;}
           // printf("Case %lld: %lld\n",a,ans);
            }
            printf("Case %d: %d\n",a,c);
            a++;
        }
    }
}
