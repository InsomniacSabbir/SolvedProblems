#include<stdio.h>
int main()
{
    int T,H,M,a,b,mt,ot;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%d:%d",&H,&M);
        mt=(H*60)+M;
        if(mt>=720)
        {
            ot=mt-720;
        }
        else
        {
        ot=720-mt;
        }
        if(ot==0){H=12;M=0;}
        else if(ot<=60)
        {
            if(mt==660)
            {
            H=01;
            M=ot%60;
            }
            else if(mt<720)
            {
                H=12;
                M=ot%60;
            }
            else if(mt>720)
            {
                H=11;
                M=60-(ot%60);
            }
        }
        else
        {
        H=(ot/60);
        M=(ot%60);
        }

            if(H<10&&M<10)
            {
                printf("0%d:0%d\n",H,M);
            }
            else if(H<10&&M>=10)
            {
                printf("0%d:%d\n",H,M);
            }
            else if(H>=10&&M<10)
            {
                printf("%d:0%d\n",H,M);
            }
            else{printf("%d:%d\n",H,M);}


    }
    return 0;
}
