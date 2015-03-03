#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi acos(-1)
char arr[1000000000];
int main()
{
    long long int a,b,countt=0,sum,c,action=1;
    while(gets(arr))
    {
        action=1;
        sum=0;
        while(action>0)
        {
            action=0;
            for(a=0;arr[a]!='\0';a++)
              {
            if(arr[a]==' ')
                {
                c=a;
                while(arr[c]==' ')
                {
                    countt++;
                    c++;
                    if(countt==2){action++;countt=0;arr[a]='a';a++;}
                }
                a=c;
                countt=0;
                }
              }
              if(action==0){}
              else
              {
                  sum++;
              }
        }
        printf("%lld\n",sum);

    }

return 0;
}

