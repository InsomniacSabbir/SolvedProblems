#include <iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int T,N,a,b,i,j,ocount,xcount,xflag=0,oflag=0;
    char ch[10][10],c;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        //memset(ch,0,sizeof(ch));
        xflag=0;oflag=0;
        ocount=0;xcount=0;
        for(i=0;i<3;i++)
        {

            for(j=0;j<3;j++)
                {
                    cin>>ch[i][j];
                    if(ch[i][j]=='X'){xcount++;}
                    else if(ch[i][j]=='O'){ocount++;}
                    //printf("%c",ch[i][j]);
                }
        }
        for(i=0;i<3;i++)
        {
                if(ch[i][0]=='X'&&ch[i][1]=='X'&&ch[i][2]=='X'){xflag=1;break;}
                else if(ch[i][0]=='O'&&ch[i][1]=='O'&&ch[i][2]=='O'){oflag=1;break;}
                if(ch[0][i]=='X'&&ch[1][i]=='X'&&ch[2][i]=='X'){xflag=1;break;}
                else if(ch[0][i]=='O'&&ch[1][i]=='O'&&ch[2][i]=='O'){oflag=1;break;}
                if(ch[0][0]=='X'&&ch[1][1]=='X'&&ch[2][2]=='X'){xflag=1;break;}
                else if(ch[1][1]=='O'&&ch[2][2]=='O'&&ch[0][0]=='O'){oflag=1;break;}
                if(ch[0][2]=='X'&&ch[1][1]=='X'&&ch[2][0]=='X'){xflag=1;break;}
                else if(ch[0][2]=='O'&&ch[1][1]=='O'&&ch[2][0]=='O'){oflag=1;break;}
        }
        if(xcount>ocount+1||xcount<ocount)
        {
            printf("no\n");
        }
        else if(xflag==1&&oflag==1)
        {
            printf("no\n");
        }
        else if(xflag==1&&xcount!=ocount+1)
        {
            printf("no\n");
        }
        else if(oflag==1&&ocount!=xcount)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}
