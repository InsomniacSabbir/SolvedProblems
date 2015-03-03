#include<stdio.h>
#include<math.h>
#include<string.h>

long long int V[99999+7];
long long int counter;

long long int checkHappy(long long int n)
{

    long long int j,sum=0,temp;
    temp=n;
    long long int k=1;
    while(k==1)
    {
        j=temp%10;
        sum=sum+(j*j);
        temp=temp/10;
        if(j==0&&temp==0){break;}
    }
    counter++;
    if(sum>9){checkHappy(sum);}
    else
    return sum;
}
void happyGen()
{
    long long int i,res;
     for(i=2;i<=99999+5;i++)
        {
            counter=0;
            res=checkHappy(i);
            counter++;
            if(res==1)
            {
                V[i]=counter;
            }
            else if(res<10&&V[res]!=0)
            {
                counter+=(V[res]-1);
                V[i]=counter;
            }
        }
}
int main()
{
    memset(V,0,sizeof(V));
    V[1]=1;
    happyGen();
    long long int L,H,i,res,flag=0;
    while(scanf("%lld %lld",&L,&H)==2&&L!=EOF&&H!=EOF)
    {
        if(L==EOF)
        {
            break;
        }
        if(flag!=0)
        printf("\n");
        if(L>H)
        {
            i=L;
            L=H;
            H=i;
        }
        for(i=L;i<=H;i++)
        {
            if(V[i]>0)
            printf("%lld %lld\n",i,V[i]);
        }
        flag=1;

    }
    return 0;
}
