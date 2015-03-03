#include<stdio.h>
int main()
{
    int a=1,N,c,sum;
    while(a!=0)
    {
        sum=0;
        scanf("%d",&N);
        if(N==0){a=0;}
        else
        {
            for(c=N;c>=1;c--)
            {
                sum=sum+(c*c);
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
