#include<stdio.h>
#include<math.h>
int main()
{
    long long T,a,b,c;
    scanf("%lld",&T);
    for(a=1;a<=T;a++)
    {
        int d=0;
        scanf("%lld",&b);
        if(b==0){c=0;}
        else
        {
            c=((sqrt((8*b)+1)-1)/2);


        }
        printf("%lld\n",c);

    }
}
