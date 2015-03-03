#include<stdio.h>
int main()
{
    int tCase,nCase,lr,ll,L,W,wu,wd,i,j,r;
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%d",&r);
        L=r*5;
        W=(6*L)/10;
        lr=(11*L)/20;
        ll=-((9*lr)/11);
        wu=(W/2);
        wd=-(W/2);
        printf("Case %d:\n",nCase);
        printf("%d %d\n",ll,wu);
        printf("%d %d\n",lr,wu);
        printf("%d %d\n",lr,wd);
        printf("%d %d\n",ll,wd);
    }
    return 0;
}
