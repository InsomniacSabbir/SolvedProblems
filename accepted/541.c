#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1&&n!=0)
    {
        int rcount,ccount,rbit=0,cbit=0,rpos,cpos;
        int mat[n][n];
        for(i=0;i<n;i++)
        {
            rcount=0;
            for(j=0;j<n;j++)
            {
                scanf("%d",&mat[i][j]);
                rcount=rcount+mat[i][j];
            }
            if(rcount%2!=0)
            {
                    rpos=i;
                    rbit++;
            }

        }
        for(i=0;i<n;i++)
        {
            ccount=0;
            for(j=0;j<n;j++)
            {
                ccount=ccount+mat[j][i];
            }
            if(ccount%2!=0)
            {
                    cpos=i;
                    cbit++;
            }

        }


        if(rbit==1&&cbit==1)
        {
            printf("Change bit (%d,%d)\n",rpos+1,cpos+1);
        }
        else if(rbit==0&&cbit==0){printf("OK\n");}
        else if(rbit>1||cbit>1){printf("Corrupt\n");}
    }
    return 0;
}
