#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int N,nCase,tCase,i,j,len;
    char str[10000];

    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        printf("Case %d:\n",nCase);
        scanf("%d",&N);
        getchar();
        for(i=1;i<=N;i++)
        {
            gets(str);
            len=strlen(str);

            for(j=0;j<len;j++)
            {
                if(str[j]!=' ')
                {
                    printf("%c",str[j]);
                }
                else if(str[j]==' '&&str[j+1]==' ')
                {

                }
                else{printf(" ");}
            }
            printf("\n");
        }
        if(nCase!=tCase)
        printf("\n");
    }
    return 0;
}
