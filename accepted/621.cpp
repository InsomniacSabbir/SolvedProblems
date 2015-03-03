#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int tCase,nCase,i,j,n;
    char S[1000];
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%s",&S);
        n=strlen(S);
        if(strcmp(S,"1")==0||strcmp(S,"4")==0||strcmp(S,"78")==0)
        {
            printf("+\n");
        }
        else if(S[n-1]=='5'&&S[n-2]=='3')
        {
            printf("-\n");
        }
        else if(S[0]=='9'&&S[n-1]=='4')
        {
            printf("*\n");
        }
        else
        {
            printf("?\n");
        }
    }
    return 0;
}
