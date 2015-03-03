#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int n,i,j,k,temp,high,low,ans;
    char str[100],ch;
    while(gets(str))
    {
        n=strlen(str);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(str[i]>str[j])
                {
                    //printf("%d\t%d\n",str[i],str[j]);
                    ch=str[i];
                    str[i]=str[j];
                    str[j]=ch;
                    //printf("%d\t%d\n",str[i],str[j]);
                }
            }
        }

        i=n-2;
        temp=str[n-1]-'0';
        while(i>=0)
        {
            temp=temp*10;
            temp=temp+(str[i]-'0');
            i--;

        }
        high=temp;
        i=0;
        while(1)
        {
            if(str[i]!='0')
            {
                break;
            }
            i++;
        }
        ch=str[i];
        str[i]='0';
        str[0]=ch;
        i=1;
        temp=str[0]-'0';
        while(i<n)
        {
            temp=temp*10;
            temp=temp+(str[i]-'0');
            i++;

        }
        low=temp;
        temp=high-low;
        printf("%lld - %lld = %lld = 9 * %lld\n",high,low,temp,temp/9);
    }
    return 0;
}
