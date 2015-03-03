#include<stdio.h>
#include<math.h>
#include<string.h>

int prime[10000010];

int isPrime(int n)
{
    int i,flag=1;
    if(n==1)return 0;
    else if(n==2||n==3)
    {
        return 1;
    }
    else
    {
        for(i=2;i<=sqrt(n)+1;i++)
        {
            if(n%i==0){flag=0;}
        }
        if(flag==0)return 0;
        else return 1;
    }
}

int main()
{

    //memset(prime,0,sizeof(prime));
    //primegen();

    int N,i,j,k,pFlag,eFlag,arr[1000],x,temp;
    while(scanf("%d",&N)==1)
    {
        pFlag=0;eFlag=0;
        if(isPrime(N)==1)
        {
            //printf("dhukc\n");
            pFlag=1;
        }
        else{}
        if(pFlag==1)
        {
            //printf("eitay dhukc\n%d\n",pFlag);
            i=1;
            x=0;

            temp=N;
            x+=(temp%10);
            temp=temp/10;
            //printf("x==%d\n",x);
            while(temp!=0)
            {
                x=x*pow(10,1);
                //printf("x===%d\n",x);
                x+=(temp%10);
                temp=temp/10;
                i++;
                //printf("x=%d\n",x);
            }
            //printf("%d\n",x);
            if(isPrime(x)==1&&x!=N)
            {
                eFlag=1;
            }
        }
        if(pFlag==0)
        {
            printf("%d is not prime.\n",N);
        }
        else if(pFlag==1&&eFlag==0)
        {
            printf("%d is prime.\n",N);
        }
        else
        {
            printf("%d is emirp.\n",N);
        }
    }

    return 0;
}
