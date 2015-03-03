#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long int tCase,nCase,i,j,k,len;

    double arr[1000],ans,temp;
    scanf("%lld",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        i=1;
        while(scanf("%lf",&arr[i])&&arr[i]!=0)
        {
            i++;
        }
        i--;
        len=i;
        for(i=1;i<len;i++)
        {
            for(j=i+1;j<=len;j++)
            {
                if(arr[i]<=arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        ans=0;
        for(i=1;i<=len;i++)
        {
            //printf("%.0lf ",arr[i]);
            ans+=(2*pow(arr[i],i));
        }
        if(ans>5000000)
            printf("Too expensive\n");
        else
            printf("%.0lf\n",ans);
    }
    return 0;
}

