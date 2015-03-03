#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 10101
int Prime[MAX];

int isPrime(int n)
{
    if(n==1||n==0)
    {
        return 0;
    }
    else if(n==2||n==3)
    {
        return 1;
    }
    else
    {
        int i,flag=1;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){flag=0;break;}
        }
        return flag;
    }
}


int main()
{
    memset(Prime,0,sizeof(Prime));
    //PrimeGen();
    int a,b,i,x,j;
    double p,np,ans;
    Prime[0]=0;
    for(i=0;i<=10001;i++)
    {
        Prime[i+1]=Prime[i];
        x=(i*i)+i+41;
        if(isPrime(x))
        {
            Prime[i+1]++;
        }
    }
    while(scanf("%d%d",&a,&b)==2)
    {
        p=Prime[b+1]-Prime[a];
        printf("%.2lf\n",((p)/(b-a+1.00))*100+1e-6);
    }
    return 0;
}
