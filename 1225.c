#include<stdio.h>
#include<string.h>
int main()
{
 long long int T,N,a,b,i,j,digit[10],x;
 scanf("%lld",&T);
 for(a=1;a<=T;a++)
 {
     digit[0]=digit[1]=digit[2]=digit[3]=digit[4]=digit[5]=digit[6]=digit[7]=digit[8]=digit[9]=0;
     scanf("%lld",&N);
     for(i=1;i<=N;i++)
     {
         if(i<=9){digit[i]++;}
         else
         {
             x=i;
             while(x!=0)
             {
                 j=x%10;
                 digit[j]++;
                 x=x/10;
             }
         }
     }
     printf("%lld",digit[0]);
     for(i=1;i<10;i++)
     {
         printf(" %lld",digit[i]);
     }
     printf("\n");
 }
 return 0;
}
