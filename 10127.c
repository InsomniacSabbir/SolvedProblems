#include<stdio.h>
int main()
{
    long long int n,countt=0,a,i,j,x;
    while(scanf("%lld",&n)!=EOF)
    {
        countt=1;
        a=1;x=1;
        while(x!=0)
        {
            if(a%n==0){x=0;}
            else{countt++;a=((a%n)*10)+1;}
        }
        printf("%lld\n",countt);
    }
    return 0;
}
