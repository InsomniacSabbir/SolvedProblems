#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,j,sum,maximum=0,N,temp,m,n,M,max;
    while(scanf("%d%d",&M,&N)==2&&(M!=0||N!=0))
    {
        int mat[M+5][N+5];
        memset(mat,0,sizeof(mat));
        maximum=0;
        for(i=1;i<=M;i++)
        {
            for(j=1;j<=N;j++)
            {
                scanf("%d",&temp);
                if(temp==0)
                {
                    temp=1;
                }
                else
                {
                    temp=0;
                }
                mat[i][j]=temp+mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
            }
        }
        maximum=0;
        for(i=1;i<=M;i++)
        {
            for(j=1;j<=N;j++)
            {
                for(m=i;m<=M;m++)
                {
                    for(n=j;n<=N;n++)
                    {
                        temp=mat[m][n]-mat[i-1][n]-mat[m][j-1]+mat[i-1][j-1];
                        max=(m-i+1)*(n-j+1);
                        if(temp==max&&max>maximum)
                            maximum=temp;
                    }
                }
            }
        }
        printf("%d\n",maximum);
    }

    return 0;
}

