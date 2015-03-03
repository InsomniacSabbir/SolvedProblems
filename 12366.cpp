#include<stdio.h>
int main()
{
    int a[3],b,c,i,j;
    while(scanf("%d%d%d",&a[0],&a[1],&a[2])==3&&a[0]!=0&&a[1]!=0&&a[2]!=0)
    {
        int flag=1;
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<=2;j++)
            {
                if(a[i]>a[j])
                {
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b;
                }
            }
        }

        if(a[0]==a[1]&&a[1]==a[2])
        {
            if(a[0]==13)
            {
                printf("*\n");
                flag=0;
            }
            else
            {
                a[0]++;
                a[1]++;
                a[2]++;
            }
        }
        else if(a[0]==a[1])
        {
            if(a[2]==13&&a[1]!=12)
            {
                a[1]++;
                a[0]=1;
                a[2]=a[1];
            }
            else if(a[2]==13&&a[1]==12)
            {
                a[0]=1;
                a[1]=13;
                a[2]=13;
            }
            else
            {
                a[2]++;
            }
        }
        else if(a[1]==a[2])
        {
            if(a[0]==12&&a[1]==13)
            {
                a[0]=1;
                a[1]=1;
                a[2]=1;
            }
            else
            {
                if(a[1]-a[0]==1)
                {
                    a[0]+=2;
                    a[2]=a[0];
                    a[0]=a[1];
                }
                else
                {
                    a[0]++;
                }
            }
        }
        else
        {
            a[0]=1;
            a[1]=1;
            a[2]=2;
        }
        if(flag==1)
        {
            printf("%d %d %d\n",a[0],a[1],a[2]);
        }
    }
    return 0;
}
