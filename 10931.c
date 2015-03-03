#include<stdio.h>
int main()
{
    int a,n,b=1,c,d,num[1000];
    while(b!=0)
    {
        int count=0;
        scanf("%d",&n);
        if(n==0){b=0;}
        else
        {
            for(a=1;n!=0;a++)
            {
                num[a]=n%2;
                n=n/2;
                if(num[a]==1){count++;}

            }
            printf("The parity of ");
            for(c=a-1;c>=1;c--)
            {
                printf("%d",num[c]);
            }
            printf(" is %d (mod 2).\n",count);
        }
    }
}
