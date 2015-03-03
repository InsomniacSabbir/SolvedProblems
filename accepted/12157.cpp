#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int tCase,nCase,N,call,mile,juice,i,temp,temp_m;

    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        mile=0;juice=0;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            scanf("%d",&call);
            temp=call/60;
            temp_m=call%60;
            mile+=temp*20;
            if(temp_m<30){mile+=10;}
            else{mile+=20;}

            temp=call/120;
            temp_m=call%120;
            juice+=temp*30;
            if(temp_m<60){juice+=15;}
            else{juice+=30;}
        }
        //printf("mile=%d\tjuice=%d\n",mile,juice);
        if(juice<mile)
        {
            printf("Case %d: Juice %d\n",nCase,juice);
        }
        else if(juice>mile)
        {
            printf("Case %d: Mile %d\n",nCase,mile);
        }
        else if(juice==mile)
        {
            printf("Case %d: Mile Juice %d\n",nCase,mile);
        }
    }
    return 0;
}
