#include<stdio.h>
#include<string.h>
#include<math.h>


int Prime[15]={561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};


int main()
{

    int N,i,j,k,counter,temp,flag;
    while(scanf("%d",&N)==1&&N!=0)
    {
        flag=0;
        for(i=0;i<15;i++)
        {
            if(N==Prime[i])
            {
                flag=1;
            }

        }
        if(flag==1)
        {
                //printf("%d\n",N);
            printf("The number %d is a Carmichael number.\n",N);
                //car++;
        }
        else
        {
            printf("%d is normal.\n",N);
        }
    }
    return 0;
}
