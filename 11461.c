#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,e,f,g=1,d;
    while(g!=0)
    {
        f=0;
        g=1;
        scanf("%d%d",&a,&b);
        if(a==0&&b==0){g=0;}
        else if(a>0&&b>0)
        {
            for(c=a;c<=b;c++)
            {
                d=sqrt(c);
                if((d*d)==c){f++;}
            }
            printf("%d\n",f);
        }
    }
}
