#include<stdio.h>
#include<string.h>
int digit(int n)
{
    int res=0;
    while(n!=0)
    {
        res=res+(n%10);
        n=n/10;

    }
    if(res>9){res=digit(res);}
    else{return res;}
}
int main()
{
    float ans;
    int i,j,sum1,sum2,a;
    char name1[100],name2[100],ch='%';
    while(gets(name1))
    {
        sum1=0;sum2=0;
        gets(name2);
        i=strlen(name1);
        j=strlen(name2);
        for(a=0;a<i;a++)
        {
            if(name1[a]>='A'&&name1[a]<='Z'){sum1+=(name1[a]-64);}
            else if(name1[a]>='a'&&name1[a]<='z'){sum1+=(name1[a]-96);}
        }
        for(a=0;a<j;a++)
        {
            if(name2[a]>='A'&&name2[a]<='Z'){sum2+=(name2[a]-64);}
            else if(name2[a]>='a'&&name2[a]<='z'){sum2+=(name2[a]-96);}
        }
        sum1=digit(sum1);
        sum2=digit(sum2);
        if(sum1>sum2)
        {
            ans=(float)(sum2)/(float)(sum1);
        }
        else
        {

             ans=(float)(sum1)/(float)(sum2);
        }
        ans=ans*100;
        printf("%.2f %c\n",ans,ch);
        }
        return 0;
    }
