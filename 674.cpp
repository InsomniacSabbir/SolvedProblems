#include<stdio.h>
#include<math.h>
#include<string.h>

int arr[10000];
int coin[5];
int value[10000];
void make()
{
    int i,j,k;
    //for(k=0;k<=5;k++)
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=7489;j++)
        {
            if(arr[j]>=1)
            {
                if((coin[i]+j)<7499)
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
    int N,res;
    while(scanf("%d",&N)==1)
    {
        res=arr[N];
        printf("%d\n",res);
    }
    return 0;
}
