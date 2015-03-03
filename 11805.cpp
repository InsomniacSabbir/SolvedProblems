#include<stdio.h>
#include<string.h>

int main()
{
    int arr[1000],N,K,P,i,j,a,b,nCase,tCase;
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%d%d%d",&N,&K,&P);
        j=K;
        for(i=0;i<N;i++,j++)
        {
            if(j>N){j=1;}
            else{}
            arr[i]=j;
            //printf("%d ",arr[i]);
        }
        //printf("\n");
        a=P%N;
        //printf("a=%d\n",a);
        b=arr[a];
        //printf("b=%d\n",b);
        printf("Case %d: %d\n",nCase,b);
    }
    return 0;
}
