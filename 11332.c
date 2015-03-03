#include<stdio.h>
int sum(int n)
{
    int add=0;
    for(;n!=0;)
    {
        add=add+(n%10);
        n=n/10;
    }
    return add;
}
int main()
{
    int n,c=0,a=1,d=1,x=1;
    while(x!=0)
    {
        scanf("%d",&n);
        if(n==0){x=0;break;}
        else
    {   d=1;c=0;
        for(;d!=0;)
        {
            c=sum(n);
            d=c/10;
            n=c;
        }
        printf("%d\n",n);
    }
    }
}
