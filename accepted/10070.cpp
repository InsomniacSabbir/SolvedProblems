#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int flag,i,j,k=0,n;
    char str[10000];
    while(scanf("%s",&str)!=EOF&&str[0]!='0')
    {
        if(k==1)
        {
            printf("\n");
        }
        k=1;
        int f1=0,f2=0,f3=0,val1=0,val2=0,hulu=0,bulu=0,leap=0;
        n=strlen(str);
        for(i=0;i<=n-1;i++)
        {
            val1=f1+str[i]-'0';
            val2=f2+str[i]-'0';
            f1=val1%4;
            f2=val2%15;
            f1=f1*10;
            f2=f2*10;
        }
        if(f1==0)
        {
            val1=0;
            for(i=0;i<=n-1;i++)
            {
                val1=f1+(str[i]-'0');
                f1=val1%100;
                f1=f1*10;
            }
            if(f1==0)
            {
                val1=0;
                for(i=0;i<=n-1;i++)
                {
                    val1=f1+(str[i]-'0');
                    f1=val1%400;
                    f1=f1*10;
                }
                if(f1==0)
                {
                    leap=1;
                }
                else
                {
                    leap=0;
                }
            }
            else
            {
                leap=1;
            }
        }
        if(f2==0)
        {
            hulu=1;
        }
        if(leap==1)
        {
            val1=0;
            for(i=0;i<=n-1;i++)
            {
                val1=f3+str[i]-'0';
                f3=val1%55;
                f3=f3*10;
            }
            if(f3==0)
            {
                bulu=1;
            }
        }
        if(leap==1)
        {
            printf("This is leap year.\n");
        }
        if(hulu==1)
        {
            printf("This is huluculu festival year.\n");
        }
        if(bulu==1)
        {
            printf("This is bulukulu festival year.\n");
        }
        if(hulu==0&&leap==0&&bulu==0)
        {
            printf("This is an ordinary year.\n");
        }

    }
    return 0;
}

