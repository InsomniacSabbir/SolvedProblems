#include<stdio.h>
int main()
{
    int a,b,c,d,l,count,e,f,g=1;
    while(g!=0)
    {
        count=0;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&l);
        if(a==0&&b==0&&c==0&&d==0&&l==0){g=0;}
        else
        {
            for(e=0;e<=l;e++)
            {
                f=(a*e*e)+(b*e)+c;
                if(f%d==0){count++;}
            }
             printf("%d\n",count);
        }

    }
}
