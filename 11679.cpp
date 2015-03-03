#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int B,N,BankValue[100],bankRel[100],deb,cre,dv,i;
    while(scanf("%d%d",&B,&N)==2&&B!=0&&N!=0)
    {
        for(i=1;i<=B;i++)
        {
            scanf("%d",&BankValue[i]);
        }
        for(i=1;i<=N;i++)
        {
            scanf("%d%d%d",&deb,&cre,&dv);
            BankValue[deb]-=dv;
            BankValue[cre]+=dv;
        }
        int flag=1;
        for(i=1;i<=B;i++)
        {
            if(BankValue[i]<0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
