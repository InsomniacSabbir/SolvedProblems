#include<stdio.h>
#include<math.h>
#include<string.h>

long long int arr[40000];
long long int coin[5];
long long int value[40000];
void make()
{
    long long int i,j,k;
    //for(k=0;k<=5;k++)
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=30001;j++)
        {
            if(arr[j]>=1)
            {
                if((coin[i]+j)<30001)
                {
                    arr[coin[i]+j]+=arr[j];
                }
            }
        }
    }
}

int main()
{
    coin[0]=50;
    coin[1]=25;
    coin[2]=10;
    coin[3]=5;
    coin[4]=1;
    memset(arr,0,sizeof(arr));
    memset(value,0,sizeof(value));
    arr[0]=1;
    make();
    long long int N,res;
    while(scanf("%lld",&N)==1)
    {
        res=arr[N];
        if(res==1){printf("There is only 1 way to produce %lld cents change.\n",N);}
        else
            printf("There are %lld ways to produce %lld cents change.\n",res,N);
    }
    return 0;
}

