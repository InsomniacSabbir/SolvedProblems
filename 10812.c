#include<stdio.h>
int main()
{
    int c,s,d,x,y,n;
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        scanf("%d %d",&s,&d);
        if(s>=0&&d>=0){
        if(s>d)
        {
            x=s-d;
            y=x/2+d;
            if(y+x/2==s)
            {
            printf("%d %d\n",y,x/2);
            }
            else{printf("impossible\n");}
        }
        else if(s==d){printf("%d %d\n",s,s-d);
        }
        else{printf("impossible\n");}
    }
    else{printf("impossible\n");}
    }

    return 0;
}
