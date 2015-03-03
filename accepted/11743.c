#include<stdio.h>
int main()
{
    int T,a,b,c,str1,str2,str3,str4,sum,temp1;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        sum=0;
        scanf("%d %d %d %d",&str1,&str2,&str3,&str4);
        sum=((str1/100)%10)+(str1%10)+((str2/100)%10)+(str2%10)+((str3/100)%10)+(str3%10)+((str4/100)%10)+(str4%10);
        //printf("%d\n",sum);
        temp1=(str1/1000)*2;
        sum=sum+(temp1/10)+(temp1%10);
        temp1=((str1/10)%10)*2;
        sum=sum+(temp1/10)+(temp1%10);
        temp1=(str2/1000)*2;
        sum=sum+(temp1/10)+(temp1%10);
        temp1=((str2/10)%10)*2;
        sum=sum+(temp1/10)+(temp1%10);
        temp1=(str3/1000)*2;
        sum=sum+(temp1/10)+(temp1%10);
        temp1=((str3/10)%10)*2;
        sum=sum+(temp1/10)+(temp1%10);
        temp1=(str4/1000)*2;
        sum=sum+(temp1/10)+(temp1%10);
        temp1=((str4/10)%10)*2;
        sum=sum+(temp1/10)+(temp1%10);
        //printf("%d\n",sum);
        if(sum%10==0){printf("Valid\n");}
        else {printf("Invalid\n");}



    }

}
