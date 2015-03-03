#include<stdio.h>
int main()
{
    int c,T,G,L,a,b;
    scanf("%d",&T);
    for(c=1;c<=T;c++)
    {
        scanf("%d%d",&G,&L);
        if(G==1){printf("1 %d\n",L);}
        else if(L%G==0){printf("%d %d\n",G,L);}
        else{printf("-1\n");}
    }

}
