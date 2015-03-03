#include<stdio.h>
int main()
{
    long long int a1,a2,A1[11],A2[11],b,a,c=1,d;
    while(c!=0)
    {
        scanf("%lld%lld",&a1,&a2);
        long long int count=0;
        long long int temp=0;
        if(a1==0&&a2==0){break;}
        else
        {
            if(a1<a2)
            {
                d=a1;a1=a2;a2=d;
            }
            for(a=0;a1!=0;a++)
            {
                A1[a]=a1%10;
                a1=a1/10;
                A2[a]=a2%10;
                a2=a2/10;

            }

            for(b=0;b<=a-1;b++)
            {
                temp=temp+A1[b]+A2[b];
                if(temp>=10)
                {
                    count++;
                    temp=temp/10;

                }
                else{temp=0;}
            }
            if(count==1){printf("1 carry operation.\n");}
            else if(count==0){printf("No carry operation.\n");}
            else{printf("%lld carry operations.\n",count);}
        }
    }
    return 0;
}
