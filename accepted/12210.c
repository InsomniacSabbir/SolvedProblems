#include<stdio.h>
int main()
{
    long long int B[100001],S[10002],b,s,a=1,c,d,e,f,i,j,tcase=1;
    while(a!=0)
    {
        scanf("%lld%lld",&b,&s);
        for(e=0;e<b;e++)
        {
            scanf("%lld",&B[e]);
        }
        for(e=0;e<s;e++)
        {
            scanf("%lld",&S[e]);
        }
        if(b==0&&s==0){a=0;}
        else
        {
            if(s>=b){printf("Case %lld: 0\n",tcase);tcase++;}
            else
            {
                d=b-s;
                for(i=0;i<b-1;i++)
                {
                    for(j=i+1;j<b;j++)
                    {
                        if(B[i]>B[j])
                        {
                            c=B[i];
                            B[i]=B[j];
                            B[j]=c;
                        }
                    }
                }

                printf("Case %lld: %lld %lld\n",tcase,d,B[0]);
                tcase++;
            }
        }
    }
}

