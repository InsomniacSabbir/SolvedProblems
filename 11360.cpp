#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    int n,i,j,temp,tCase,nCase,ins,k,len,a,b;
    char dir[19],final[11][11],mat[11][11];

    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%d",&n);
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%c",&mat[i][j]);
            }
            getchar();
        }
        scanf("%d",&ins);
        getchar();
        for(k=1;k<=ins;k++)
        {
            gets(dir);
            len=strlen(dir);
            if(dir[0]=='t')
            {
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        final[j][i]=mat[i][j];
                    }
                }
            }
            else if(dir[0]=='i')
            {
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        temp=mat[i][j]-48;
                        temp++;
                        if(temp>=10){temp=temp%10;}
                        final[i][j]=temp+48;
                    }
                }
            }
            else if(dir[0]=='d')
            {
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        temp=mat[i][j]-48;
                        temp--;
                        if(temp<0){temp=temp+10;}
                        final[i][j]=temp+48;
                    }
                }
            }
            else if(dir[0]=='r')
            {
                a=dir[4]-48;
                b=dir[6]-48;
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(i==a)
                        {
                            final[b][j]=mat[i][j];
                        }
                        else if(i==b)
                        {
                            final[a][j]=mat[i][j];
                        }
                        else
                        {
                            final[i][j]=mat[i][j];
                        }
                    }
                }
            }
            else if(dir[0]=='c')
            {
                a=dir[4]-48;
                b=dir[6]-48;
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(j==a)
                        {
                            final[i][b]=mat[i][j];
                        }
                        else if(j==b)
                        {
                            final[i][a]=mat[i][j];
                        }
                        else
                        {
                            final[i][j]=mat[i][j];
                        }
                    }
                }
            }
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    mat[i][j]=final[i][j];
                }
            }
        }
        printf("Case #%d\n",nCase);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%c",mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
