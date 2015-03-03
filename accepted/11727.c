#include<stdio.h>
int main()
{
    int T,sal[3],a,b,c,d,i,j;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%d%d%d",&sal[0],&sal[1],&sal[2]);
        if((sal[0]>sal[1]&&sal[0]<sal[2])||(sal[0]<sal[1]&&sal[0]>sal[2]))
        {
            printf("Case %d: %d\n",a,sal[0]);
        }
        else if((sal[1]>sal[0]&&sal[1]<sal[2])||(sal[1]<sal[0]&&sal[1]>sal[2]))
        {
            printf("Case %d: %d\n",a,sal[1]);
        }
        else {printf("Case %d: %d\n",a,sal[2]);}
    }
    return 0;
}
