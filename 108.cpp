#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,j,sum,maximum=0,N,temp,m,n;
    while(scanf("%d",&N)==1)
    {
        int mat[N+2][N+2];
        memset(mat,0,sizeof(mat));
        maximum=0;
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=N;j++)
            {
                scanf("%d",&temp);
                mat[i][j]=temp+mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
                if(mat[i][j]>maximum)
                    maximum = mat[i][j];
            }
        }
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=N;j++)
            {
                for(m=i;m<=N;m++)
                {
                    for(n=j;n<=N;n++)
                    {
                        temp=mat[m][n]-mat[i-1][n]-mat[m][j-1]+mat[i-1][j-1];
                        if(temp>maximum)
                        {
                            maximum=temp;
                        }
                    }
                }
            }
        }
        printf("%d\n",maximum);
    }

    return 0;
}
