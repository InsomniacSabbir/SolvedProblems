#include<stdio.h>
int main()
{
    int T,x,y,dx,dy,a,b,c;
    while(scanf("%d",&T)==1&&T!=0)
    {
        scanf("%d %d",&dx,&dy);
        for(a=1;a<=T;a++)
        {
            scanf("%d %d",&x,&y);
            if(x==dx||y==dy){printf("divisa\n");}
            else if (x>dx&&y>dy){printf("NE\n");}
            else if(x<dx&&y>dy){printf("NO\n");}
            else if(x<dx&&y<dy){printf("SO\n");}
            else{printf("SE\n");}
        }
    }
}
