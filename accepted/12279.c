#include<stdio.h>
int main()
{
    int T=1,n,a,Zcount,Ncount,balance,b;
    while(scanf("%d",&n)==1&&n!=0)
    {
        Zcount=0;Ncount=0;
        for(a=1;a<=n;a++)
        {
            scanf("%d",&b);
            if(b==0){Zcount++;}
            else {Ncount++;}
        }
        balance=Ncount-Zcount;
        printf("Case %d: %d\n",T++,balance);
    }
    return 0;
}
