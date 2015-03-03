#include<stdio.h>
int abso(int a,int b)
{
    int ans;
    if(a>b)
    {
        ans=(a-b);
    }
    else
    {
        ans=(b-a);
    }
    return ans;
}
int main()
{
    int n,i,arr[4000],b,a,flag=0,temp,str[4000];
    while(scanf("%d",&n)!=EOF)
    {
        flag=1;
        for(a=0;a<n;a++)
        {
            scanf("%d",&arr[a]);
            str[a+1]=0;
        }
        for(b=0;b<n-1;b++)
        {
            temp=abso(arr[b],arr[b+1]);
            str[temp]=1;
        }
        for(i=1;i<n;i++)
        {
            if(str[i]==0)
            {
                flag=0;
            }

        }

        if(flag==0)
        {
            printf("Not jolly\n");
        }
        else
        {
            printf("Jolly\n");
        }
    }
}
