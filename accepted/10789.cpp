#include<stdio.h>
#include<string.h>
#include<math.h>

int Prime[2010];

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


int PrimeGen()
{
    int i;
    for(i=1;i<=2002;i++)
    {
        Prime[i]=isPrime(i);
    }
}

int main()
{
    memset(Prime,0,sizeof(Prime));
    PrimeGen();
    int tCase,nCase,n,i,j,counter[200],x,flag,temp;
    char str[3000],arr[3000];

    scanf("%d",&tCase);
    getchar();
    for(nCase=1;nCase<=tCase;nCase++)
    {
        flag=0;
        memset(counter,0,sizeof(counter));
        memset(arr,0,sizeof(arr));
        gets(str);
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            counter[str[i]]++;
        }
        x=0;

        for(i=1;i<150;i++)
        {

            if(Prime[counter[i]]==1)
            {

                arr[x]=i;
                x++;
                flag=1;
            }
        }
        for(i=0;i<x-1;i++)
        {
            for(j=i+1;j<x;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        printf("Case %d: ",nCase);
        if(flag==1)
        {

            for(i=0;i<x;i++)
            {
                printf("%c",arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("empty\n");
        }
    }
    return 0;
}
