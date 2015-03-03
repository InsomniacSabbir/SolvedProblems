#include<stdio.h>
int main()
{
    int t,n,a,b,c;
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
        scanf("%d",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        n=n/10;
        n=n%10;
        if(n<0){n=-n;printf("%d\n",n);}
        else{printf("%d\n",n);}



    }
}
