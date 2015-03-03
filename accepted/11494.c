#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,n,a,b,c=1,tempx,tempy,ans;
    while(c!=0)
    {

        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(x1==0&&y1==0&&x2==0&&y2==0){c=0;}
        else
        {
            if(x1==x2&&y1==y2){ans=0;}
        else if((x1==x2&&y1!=y2)||(x1!=x2&&y1==y2)){ans=1;}
        else if(x1>x2&&y1>y2)
        {
            tempx=x1;tempy=y1;
            for(a=x1-1;a>=1;a--)
            {
                tempx=tempx-1;tempy=tempy-1;
                if(tempx==x2&&tempy==y2){ans=1;break;}
                else {ans=2;}
            }
        }
        else if(x1<x2&&y1<y2)
        {
            tempx=x1;tempy=y1;
            for(a=x1+1;a<=8;a++)
            {
                tempx=tempx+1;tempy=tempy+1;
                if(tempx==x2&&tempy==y2){ans=1;break;}
                else {ans=2;}
            }
        }
        else if(x1<x2&&y1>y2)
        {
            tempx=x1;tempy=y1;
            for(a=x1+1;a<=8;a++)
            {
                tempx=tempx+1;tempy=tempy-1;
                if(tempx==x2&&tempy==y2){ans=1;break;}
                else {ans=2;}
            }
        }
        else if(x1>x2&&y1<y2)
        {
            tempx=x1;tempy=y1;
            for(a=x1-1;a>=1;a--)
            {
                tempx=tempx-1;tempy=tempy+1;
                if(tempx==x2&&tempy==y2){ans=1;break;}
                else {ans=2;}
            }

        }

        printf("%d\n",ans);
        }
    }
    return 0;
}
