#include<stdio.h>
long int len(long int n)
{
    long int count=1;
    while(n!=1)
    {
        if(n%2==1)
        {
            n=n*3+1;
        }
        else
        n=n/2;
        count++;
    }
    return count;
}
long int num(long int min,long int max)
{
    long int i,b,n=0;
    for(i=min;i<=max;i++)
    {
        b=len(i);
        if(b>n)
        n=b;
    }
    return n;
}

int main()
{
long int min,max,i,temp,n,m;
while(scanf("%ld%ld",&min,&max)!=EOF)
{
    n=min;
    m=max;
    if(min>max)
    {
        temp=min;
        min=max;
        max=temp;
    }
    i=num(min,max);
 printf("%ld %ld %ld\n",n,m,i);
}
    return 0;
}
