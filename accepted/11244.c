#include<stdio.h>
#include<string.h>
int main()
{
    int r,c,i,j,countt,flag,a,b;
    char str[103][103];
    while(scanf("%d%d",&r,&c)==2&&(r!=0||c!=0))
    {
        getchar();
        for(a=1;a<=r;a++)
        {
            for(b=1;b<=c;b++)
            {
                scanf("%c",&str[a][b]);
            }
            getchar();
        }
        for(a=0;a<=r+1;a++)
        {
            str[a][0]='.';
            str[a][c+1]='.';
        }
        for(a=0;a<=c+1;a++)
        {
            str[0][a]='.';
            str[r+1][a]='.';
        }
        countt=0;
        for(a=1;a<=r;a++)
        {
            for(b=1;b<=c;b++)
            {
                flag=1;
                if(str[a][b]=='*')
                {
                    if(str[a-1][b-1]=='*'){flag=0;}
                    if(str[a-1][b]=='*'){flag=0;}
                    if(str[a-1][b+1]=='*'){flag=0;}
                    if(str[a][b+1]=='*'){flag=0;}
                    if(str[a+1][b+1]=='*'){flag=0;}
                    if(str[a+1][b]=='*'){flag=0;}
                    if(str[a+1][b-1]=='*'){flag=0;}
                    if(str[a][b-1]=='*'){flag=0;}
                    if(flag==1){countt++;}
                }
            }
        }
        printf("%d\n",countt);

    }

}
