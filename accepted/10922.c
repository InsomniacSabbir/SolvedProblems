#include<stdio.h>
#include<string.h>
int digit(int n)
{
    int a,res=0;
    while(n!=0)
    {
        res=res+(n%10);
        n=n/10;
    }
    return res;
}
int main()
{
    int n,countt,arr[1009],x,a,sum;
    char str[1009];
    while(scanf("%s",&str)==1&&str[0]!='0')
    {
        sum=0;
        countt=1;
        x=1;
        n=strlen(str);
        for(a=0;a<n;a++)
        {
            arr[a]=str[a]-48;
            sum=sum+arr[a];
        }
        //printf("%d\n",sum);
        while(sum>9)
        {
            sum=digit(sum);
            countt++;
        }
        if(sum%9==0){printf("%s is a multiple of 9 and has 9-degree %d.\n",str,countt);}
        else{printf("%s is not a multiple of 9.\n",str);}
    }
    return 0;
}
