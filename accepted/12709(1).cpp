#include<stdio.h>

int main()
{
    int N,L,W,H,tempH,tempV,maxV,maxH,a;

    while(scanf("%d",&N)==1&&N!=0)
    {
        maxH=0;
        maxV=0;
        for(a=1;a<=N;a++)
        {
            scanf("%d %d %d",&L,&W,&H);
            tempH=H;
            tempV=L*W*H;
            if(tempH>maxH)
            {
                maxH=tempH;
                maxV=tempV;
            }
            else if(tempH==maxH)
            {
                if(tempV>maxV)
                {
                    maxV=tempV;
                }
            }
        }
        printf("%d\n",maxV);
    }
    return 0;
}
