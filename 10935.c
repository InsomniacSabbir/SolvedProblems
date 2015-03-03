#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int T,n,a,i,j,b,str[1000],c;
    while(scanf("%d",&n)==1&&n!=0)
    {
       if(n==1)
       {
           printf("Discarded cards:\nRemaining card: 1\n");
       }
       else
       {
            memset(str , 0 , sizeof(str));
        j=1;
        i=2;
        a=n+1;
        for(b=1;b<=n;b++){str[b]=b;}
        printf("Discarded cards: %d",str[1]);
        while(b!=0)
        {
            if(str[i+1]==0){break;}
            else
            {
                if(i%2==0)
            {
                str[a]=str[i];
                a++;
            }
            else{printf(", %d",str[i]);}
            }
            i++;
        }
        printf("\nRemaining card: %d\n",str[i]);
       }
    }
    return 0;
}
