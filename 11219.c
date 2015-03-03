#include<stdio.h>
int main()
{
    int D,M,Y,d,m,y,T,a,b,c;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%d/%d/%d",&D,&M,&Y);
        scanf("%d/%d/%d",&d,&m,&y);
        b=Y-y;
        if(Y<y){printf("Case #%d: Invalid birth date\n",a);continue;}
        else if(Y==y)
        {
            if(M<m||(M==m&&D<d))
            {
                printf("Case #%d: Invalid birth date\n",a);
                continue;
            }

        }
        else
        {
           if(M<m||(M==m&&D<d)){b--;}
        }
        if(b>130){printf("Case #%d: Check birth date\n",a);}
        else {printf("Case #%d: %d\n",a,b);}

    }
    return 0;
}
