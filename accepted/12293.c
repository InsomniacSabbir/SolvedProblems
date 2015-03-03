#include<stdio.h>
int main()
{
    long long int a,ball,temp,b=1;
    while(b!=0)
    {
        scanf("%lld",&ball);
        if(ball==0){b=0;}
        else
        {
            temp=1;
    while(ball!=1)
       {
           if(ball%2==0)
           {
               temp=0;break;
           }
           else
           {
               ball=(ball-1)/2;
           }

       }
       if(temp==0)
       {
           printf("Alice\n");
       }
       else
       {
           printf("Bob\n");
       }
        }
    }
    return 0;
}
