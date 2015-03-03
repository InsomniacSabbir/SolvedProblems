#include<stdio.h>
int main()
{
    int a[4],b,c,d,n,i,j;
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        for(c=0;c<=3;c++)
        {
            scanf("%d",&a[c]);
        }
        for(i=0;i<=2;i++)
        {
            for(j=i+1;j<=3;j++)
            {
                if(a[i]<a[j])
                {
                    d=a[i];
                    a[i]=a[j];
                    a[j]=d;
                }
            }
        }
        if(a[3]>=1)
        {
        if((a[1]+a[2]+a[3])>a[0])
        {
            if((a[0]==a[1])&&(a[0]==a[2])&&(a[0]==a[3]))
        {
            printf("square\n");
        }
        else if((a[0]==a[1])&&(a[2]==a[3])&&(a[1]!=a[2]))
        {
            printf("rectangle\n");
        }
        else
        {
            printf("quadrangle\n");
        }
        }
        else{printf("banana\n");}
        }
        else{printf("banana\n");}
    }
    return 0;
}
