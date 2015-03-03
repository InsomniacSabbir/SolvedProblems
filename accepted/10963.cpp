#include<stdio.h>
#include<math.h>
#include<string.h>

int abs(int n)
{
    if(n<0)return -n;
    else return n;
}
int main()
{
    int tCase,nCase,col,i,j,flag,temp,a;
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        if(nCase!=1)
        printf("\n");
        scanf("%d",&col);
        flag=1;
        scanf("%d%d",&i,&j);
        temp=abs(i-j);
        for(a=2;a<=col;a++)
        {
            scanf("%d%d",&i,&j);
            if(temp!=abs(i-j))
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
