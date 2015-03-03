#include<stdio.h>
int main()
{
    long long int num1,num2,temp,max=0,maxfor,count,a,x,y;
    while(scanf("%lld %lld",&num1,&num2)==2&&num1!=0&&num2!=0)
    {
        max=0;
        if(num1>num2){x=num2;y=num1;}
        else{x=num1;y=num2;}
        for(a=x;a<=y;a++)
        {
            count=0;
            temp=a;
            if(temp==1){temp=(temp*3)+1;count++;}
            else{}
            while(temp!=1)
           {
            if(temp%2==0){temp=temp/2;}
            else{temp=(3*temp)+1;}
            count++;
           }
        if(max<count)
        {
            max=count;
            maxfor=a;
        }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",x,y,maxfor,max);
    }
return 0;
}
