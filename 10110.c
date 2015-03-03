#include<stdio.h>
#include<math.h>
int main()
{
    long long int a=1,b,c,n;
    while(scanf("%lld",&n)==1)
    {
        long long int flag;

        if(n==0){break;}
        else
        {
           flag=sqrt(n);
           if(flag*flag==n){printf("yes\n");}
           else{printf("no\n");}

        }
    }
return 0;
}
