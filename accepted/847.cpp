#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,flag=1,init,temp,res,valid=1,i,j;
    while(scanf("%lld",&n)==1)
    {
        init=1;
        flag=1;//stans move,flag==2 means alli moves
        valid=1;
        temp=1;
        while(temp<n)
        {
            temp*=9;
            if(temp>=n){printf("Stan wins.\n");break;}
            temp*=2;
            if(temp>=n){printf("Ollie wins.\n");break;}
        }
    }
    return 0;
}
