#include<stdio.h>
#include<math.h>
long long int test(long long int N)
{
    long long int temp,a,b,r=0;
    temp=N;
    while(1)
    {
        a=temp%10;
        temp=temp/10;
        r=r+(a*a);
        if(temp==0&&a==0){break;}
    }
    if(r>9){test(r);}
    else return r;
}
int main()
{
    long long int T,a,N,b,c,di,j,str[1000],flag=1,x=1,temp;
    scanf("%lld",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%lld",&N);
        temp=test(N);
        if(temp==1){printf("Case #%lld: %lld is a Happy number.\n",a,N);}
        else {printf("Case #%lld: %lld is an Unhappy number.\n",a,N);}
    }
}
