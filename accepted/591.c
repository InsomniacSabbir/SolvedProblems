#include<stdio.h>
int main()
{
    int t=1,a,b=0,c,d,k=0,n,h[80],j=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=0;k=0;

        if(n>=1&&n<=50)
        {
        for(a=0;a<n;a++)
        {
            scanf("%d",&h[a]);
        }
        for(a=0;a<n;a++)
        {
            b=b+h[a];
        }
        c=b/n;
        for(a=0;a<n;a++)
        {
            if(h[a]>c)
            {
                d=h[a]-c;
                k=k+d;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,k);
        }

        t++;
        scanf("%d",&n);
    }
    return 0;
}

