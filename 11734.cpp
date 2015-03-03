#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,n,i,j,k,tCase,nCase,flag,tm,jd;
    char team[1000],judge[1000],mid[1000];
    scanf("%d",&tCase);
    getchar();
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(mid,0,sizeof(mid));
        flag=1;
        gets(team);
        gets(judge);
        tm=strlen(team);
        jd=strlen(judge);
        if(strcmp(team,judge)==0){printf("Case %d: Yes\n",nCase);}
        else
        {
            if(tm==jd)
            {
                for(i=0;i<tm;i++)
                {
                    if(team[i]!=judge[i])
                    {
                        printf("Case %d: Wrong Answer\n",nCase);
                        i=tm+1;
                    }
                }
            }
            else if(tm>jd)
            {
                j=0;
                for(i=0;i<tm;i++)
                {
                    if(team[i]!=' ')
                    {
                        mid[j]=team[i];
                        j++;
                    }
                }
               // printf("mid=%s\n",mid);
              //  printf("judge=%s\n",judge);
                if(strcmp(judge,mid)==0){printf("Case %d: Output Format Error\n",nCase);}
                else{printf("Case %d: Wrong Answer\n",nCase);}
            }
            else
            {
                printf("Case %d: Wrong Answer\n",nCase);
            }

            //if(flag==0){printf("Case %d: Wrong Answer\n",nCase);}
        }
    }
    return 0;
}
