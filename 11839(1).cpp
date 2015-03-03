#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int N,ans[5],flag,i,j,res;
    while(scanf("%d",&N)==1&&N!=0)
    {
        for(i=0;i<N;i++)
        {
            flag=0;
            for(j=0;j<5;j++)
            {
                scanf("%d",&ans[j]);
            }
            for(j=0;j<5;j++)
            {
                if(ans[j]<=127&&flag==0)
                {
                    res=j;
                    flag=1;
                }
                else if(flag==1&&ans[j]<=127)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                char ch=65+res;
                printf("%c\n",ch);
            }
            else{printf("*\n");}
        }
    }
    return 0;
}
