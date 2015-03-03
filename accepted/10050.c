#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,p[109],T,i,j,countt,k,N,temp,str[3666];
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        countt=0;
        scanf("%d",&N);
        memset(str,0,sizeof(str));
        scanf("%d",&i);
        for(j=1;j<=i;j++)
        {
            scanf("%d",&p[j]);
        }
        for(j=1;j<=i;j++)
        {
          for(k=1;k<=N;k++)
          {
              if(k%p[j]==0&&str[k]!=1){str[k]=1;}

          }
        }
        for(j=1;j<=N;j++)
        {
            temp=j%7;
            if(temp==6||temp==0){str[j]=0;}
        }
        for(j=1;j<=N;j++)
        {
            if(str[j]==1)
            {
                countt++;
            }
        }
        printf("%d\n",countt);
    }
    return 0;
}

