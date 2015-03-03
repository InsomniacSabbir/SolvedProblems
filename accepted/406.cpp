#include<stdio.h>
#include<math.h>
#include<string.h>

int Prime[1000000];

int isPrime(int n)
{
    if(n==1||n==2||n==3)return 1;
    else if(n%2==0)return 0;
    else
    {
        int i,flag=1;
        for(i=3;i<=sqrt(n+1);i+=2)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        return flag;
    }
}


void genPrime()
{
    memset(Prime,0,sizeof(Prime));
    int count=1,i=1,j;
    while(count!=1003)
    {
        if(isPrime(i)==1)
        {

            Prime[i]=count;
            count++;
            //printf("num=%d pos=%d\n",i,Prime[i]);
        }
        else{Prime[i]=0;}

        i++;
    }
}

int main()
{
    genPrime();
    int N,C,i,j,limit,mid,before,after,start,end,temp;
    while(scanf("%d%d",&N,&C)==2)
    {

        temp=N;
        printf("%d %d:",N,C);
        while(true)
        {

            if(Prime[temp]!=0)break;
            temp--;
        }

        if(Prime[temp]%2==0)
        {
            limit=C*2;
            mid=Prime[temp]+1;
            mid=mid/2;
        }
        else
        {
            limit=(C*2)-1;
            mid=Prime[temp]+1;
            mid=mid/2;
        }
        if(limit%2==0)
        {
            before=limit/2;
            before--;
            after=limit/2;
        }
        else
        {
            before=(limit-1)/2;
            after=before;
        }
        //printf("b=%d a=%d m=%d\n",before,after,mid);
        if(limit>Prime[temp])
        {
            for(i=1;i<=N;i++)
            {
                if(Prime[i]!=0)
                {
                    printf(" %d",i);
                }
            }
            printf("\n");
        }
        else
        {
            start=mid-before;
            end=mid+after;
            int flag=0;
            //printf("s=%d e=%d\n",start,end);
            for(i=1;;i++)
            {
                if(Prime[i]==start)
                {
                    flag=1;
                }
                if(flag==1&&Prime[i]!=0)
                {
                    printf(" %d",i);
                }
                if(Prime[i]==end){break;}
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
