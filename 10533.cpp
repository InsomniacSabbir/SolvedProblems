#include<stdio.h>
#include<math.h>
#include<string.h>

int Prime[1000001],digitPrime[1000001],temp,sum,counter;

int isPrime(int n)
{
    int i,flag=1;
    if(n==1)return 0;
    else if (n==2||n==3)return 1;
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){flag=0;break;}
        }
        return flag;
    }
}

void PrimeGen()
{
    int i;
    counter=0;
    for(i=1;i<=1000001;i++)
    {
        Prime[i]=isPrime(i);
        if(Prime[i]==1)
        {
            temp=i;
            sum=0;
            while(temp!=0)
            {
                sum+=temp%10;
                temp/=10;
            }
            if(Prime[sum]==1)
            {
                //printf("num=%d\tprime=%d\n",i,sum);
                counter++;
            }
        }
        digitPrime[i]=counter;
    }
}

int main()
{
    memset(Prime,0,sizeof(Prime));
    memset(digitPrime,0,sizeof(digitPrime));
    PrimeGen();

    int tCase,nCase,i,j,counter,temp,sum,m,n;
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        scanf("%d %d",&m,&n);
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        counter=0;
        counter=digitPrime[n]-digitPrime[m-1];
        printf("%d\n",counter);
    }

    return 0;
}
