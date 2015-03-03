#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int initPos,i,j,lad[101],finalPos[1001000],dice[1001000],roll,player,snake,a,b,temp,p,tCase,nCase;
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        initPos=1;
        scanf("%d%d%d",&player,&snake,&roll);
        for(i=1;i<=100;i++)
            lad[i]=i;
        for(i=1;i<=player;i++)
        {
            finalPos[i]=initPos;
        }
        for(i=1;i<=snake;i++)
        {
            scanf("%d%d",&a,&b);
            lad[a]=b;
        }
        int flag=0;
        for(i=1;i<=roll;i++)
        {
            scanf("%d",&temp);
            if(flag==1)continue;
            p=i%player;
            if(p==0)
            {
                p=player;
            }
            dice[p]=temp;
            finalPos[p]+=dice[p];
            finalPos[p]=lad[finalPos[p]];
            if(finalPos[p]>=100)
            {
                finalPos[p]=100;
            }
            if(finalPos[p]==100)
            {
                flag=1;
            }
        }

        for(i=1;i<=player;i++)
        {
            printf("Position of player %d is %d.\n",i,finalPos[i]);
        }
    }

    return 0;
}

