#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct Assignment
{
    int time;
    char sub[1000];
}Assignment;

int main()
{
    Assignment ob[100];
    int tCase,nCase,N,i,j,k,l,T,flag,decision;
    char S[1000];
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        flag=0;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            scanf("%s%d",&ob[i].sub,&ob[i].time);
        }

        scanf("%d",&T);
        scanf("%s",&S);
        for(j=1;j<=N;j++)
        {
            if(strcmp(S,ob[j].sub)==0)
            {
                flag=1;
                if(ob[j].time<=T)
                {
                    decision=1;
                }
                else
                {
                    if(ob[j].time<=(T+5)&&ob[j].time>(T))
                    {
                        decision=2;
                    }
                    else if(ob[j].time>(T+5))
                    {
                        decision=3;
                    }
                }
                break;
            }
        }

        if(flag==1)
        {
            if(decision==1)
            {
                printf("Case %d: Yesss\n",nCase);
            }
            else if(decision==2)
            {
                printf("Case %d: Late\n",nCase);
            }
            else
            {
                printf("Case %d: Do your own homework!\n",nCase);
            }
        }
        else
        {
            printf("Case %d: Do your own homework!\n",nCase);
        }

       // printf("\n");
    }
    return 0;
}
