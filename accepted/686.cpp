#include<stdio.h>
#include<string.h>
#include<math.h>

int isPrime(int n)
{
    int i,flag=1;
    if(n==1)return 0;
    else if(n==2||n==3)return 1;
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){flag=0;break;}
        }
        return flag;
    }
}

int main()
{
    int N,i,j,ans,pair;
    while(scanf("%d",&N)==1&&N!=0)
    {
        int arr[100000];
        memset(arr,0,sizeof(arr));
        int flag=0,counter=0;
        for(j=N-1;j>=N/2;j--)
        {
            if(arr[j]==0)
            {
                ans=isPrime(j);
            if(ans==1)
            {
                pair=N-j;
                if(pair%2==0&&pair!=2)
                {
                    continue;
                }
                else
                {
                    ans=isPrime(pair);
                    if(ans==1)
                    {
                        arr[j]=1;
                        arr[pair]=1;
                        counter++;
                    }
                }
            }
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
