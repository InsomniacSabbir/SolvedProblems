#include<stdio.h>
#include<math.h>
#include<string.h>

//int PrimeFact[10000];

int main()
{
    int N,i,j,k,temp,flag;
    while(scanf("%d",&N)==1&&N!=0)
    {
        flag=0;
        printf("%d =",N);
        if(N<0)
        {
            printf(" -1");
            temp=-N;
            flag=1;
        }
        else
            temp=N;
        i=1;
        j=2;
        while(temp!=1&&j<=sqrt(temp))
        {
            if(temp%j==0&&flag==1)
            {
                printf(" x %d",j);
                temp=temp/j;
            }
            else if(temp%j==0&&flag==0)
            {
                printf(" %d",j);
                flag=1;
                temp=temp/j;
            }
            else
            {
                j++;
            }
        }
        if(temp!=1&&flag==1){printf(" x %d",temp);}
        else if(temp!=1&&flag==0){printf(" %d",temp);}
        printf("\n");
    }
    return 0;
}
