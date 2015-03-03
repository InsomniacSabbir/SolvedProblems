#include<stdio.h>
int ap(int n,int d)
{
    return (n+d);
}
int gp(int n,int d)
{
    return (n*d);
}
int main()
{
    int x=1,arr[3],temp1,temp2,ans;
    while(x!=0)
    {
        scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    if(arr[0]==0&&arr[1]==0&&arr[2]==0){x=0;}
    else
    {

        temp1=arr[1]-arr[0];
        temp2=arr[2]-arr[1];
        if(temp1==temp2)
        {
            ans=ap(arr[2],temp1);
            printf("AP %d\n",ans);
        }
        else
            {
                temp1=arr[1]/arr[0];
                ans=gp(arr[2],temp1);
                printf("GP %d\n",ans);
            }
    }
    }
}
#include<stdio.h>
int ap(int n,int d)
{
    return (n+d);
}
int gp(int n,int d)
{
    return (n*d);
}
int main()
{
    int x=1,arr[3],temp1,temp2,ans;
    while(x!=0)
    {
        scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    if(arr[0]==0&&arr[1]==0&&arr[2]==0){x=0;}
    else
    {

        temp1=arr[1]-arr[0];
        temp2=arr[2]-arr[1];
        if(temp1==temp2)
        {
            ans=ap(arr[2],temp1);
            printf("AP %d\n",ans);
        }
        else
            {
                temp1=arr[1]/arr[0];
                ans=gp(arr[2],temp1);
                printf("GP %d\n",ans);
            }
    }
    }
}
