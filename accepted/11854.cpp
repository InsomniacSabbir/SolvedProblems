#include<stdio.h>
int main()
{
    int a=1,b=1,c=1;
    for(;a!=0&&b!=0&&c!=0;)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==0||b==0||c==0){break;}
        if((a*a)+(b*b)==(c*c)||(a*a)==(b*b)+(c*c)||(a*a)+(c*c)==(b*b))
        {
            printf("right\n");
        }
        else{printf("wrong\n");}
    }
    return 0;
}
