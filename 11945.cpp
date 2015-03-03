#include<stdio.h>
#include<string.h>
#include<cmath>

int main()
{
    long long int tCase,nCase,i,j,k,total,len;
    char str[100],arr[100];
    double temp,sum;

 //   total=123.456;
    scanf("%lld",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        sum=0;
        for(i=1;i<=12;i++)
        {
            scanf("%lf",&temp);
            sum+=(temp*100);
        }
        //printf("%lld\t%lld\n",total,total/12);
        total=round((sum/12));
        //printf("%lld\t%lld\n",total,total/12);

        j=0;
        while(total!=0)
        {
            str[j]=total%10+'0';
            total=total/10;
            if(j==1)
            {
                j++;
                str[j]='.';
                j++;
            }
            else{j++;}

        }

        len=j;

        arr[0]=str[0];
        arr[1]=str[1];
        arr[2]=str[2];

        for(k=3,i=3;i<j;i++,k++)
        {
            arr[k]=str[i];
            if((i+1)%3==0&&i!=j-1)
            {
                k++;
                arr[k]=',';
            }
        }
        //printf("%s\n",str);
        printf("%lld $",nCase);

        for(i=k-1;i>=0;i--)
        {
            printf("%c",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
