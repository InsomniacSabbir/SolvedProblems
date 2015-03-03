#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cctype>
#include<set>
#include<bitset>
#include<algorithm>
#include<list>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

using namespace std;
//#define print1(a)    cout<<a<<endl
//#define print2(a,b) cout<<a<<" "<<b<<endl
//#define print3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
//#define oo          (1<<30)
#define PI          3.141592653589793
#define pi          2*acos(0)
//#define ERR         1e-5
//#define PRE         1e-8
#define SZ(a)       (int)a.size()
#define LL          long long
#define ISS         istringstream
#define OSS         ostringstream
#define VS          vector<string>
#define VI          vector<int>
#define VD          vector<double>
#define VLL         vector<long long>
#define SII         set<int>::iterator
#define SI          set<int>
#define mem(a,b)    memset(a,b,sizeof(a))
#define fr(i,a,b)   for(i=a;i<=b;i++)
#define frn(i,a,b)  for(i=a;i>=b;i--)

//#define fri(a,b)    for(i=a;i<=b;i++)
//#define frin(a,b)   for(i=a;i>=b;i--)
//#define frj(a,b)    for(j=a;j<=b;j++)
//#define frjn(a,b)   for(j=a;j>=b;j--)
//#define frk(a,b)    for(k=a;k<=b;k++)
//#define frkn(a,b)   for(k=a;k>=b;k--)
//#define frl(a,b)    for(l=a;l<=b;l++)
//#define frln(a,b)   for(l=a;l>=b;l--)

#define EQ(a,b)     (fabs(a-b)<ERR)
#define all(a,b,c)  for(int I=0;I<b;I++)    a[I] = c
#define CROSS(a,b,c,d) ((b.x-a.x)*(d.y-c.y)-(d.x-c.x)*(b.y-a.y))
#define sqr(a)      ((a)*(a))
#define FORE(i,a)   for(typeof((a).begin())i=(a).begin();i!=(a).end();i++)
//#define BE(a)       a.begin(),a.end()
//#define rev(a)      reverse(BE(a));
//#define sorta(a)    sort(BE(a))
#define pb          push_back
#define popb        pop_back
#define round(i,a)  i = ( a < 0 ) ? a - 0.5 : a + 0.5;
#define makeint(n,s)  istringstream(s)>>n
#define countbit(mask) __builtin_popcount(musk)
#define mod         1000000007

int P[2][2],p[2][2],N[2][8],B[2][4],R[2][4],Q[2][8];
int main()
{


//pawn(black)
p[0][0]=1;p[1][0]=-1;
p[0][1]=1;p[1][1]=1;
//pawn(white)
P[0][0]=-1;P[1][0]=-1;
P[0][1]=-1;P[1][1]=1;


//knight
N[0][0]=-1;N[1][0]=-2;
N[0][1]=-2;N[1][1]=-1;
N[0][2]=-2;N[1][2]=+1;
N[0][3]=-1;N[1][3]=+2;
N[0][4]=+1;N[1][4]=+2;
N[0][5]=+2;N[1][5]=+1;
N[0][6]=+2;N[1][6]=-1;
N[0][7]=+1;N[1][7]=-2;

//Bishop
B[0][0]=-1;B[1][0]=-1;
B[0][1]=-1;B[1][1]=+1;
B[0][2]=+1;B[1][2]=+1;
B[0][3]=+1;B[1][3]=-1;

//Rook
R[0][0]=0;R[1][0]=-1;
R[0][1]=-1;R[1][1]=0;
R[0][2]=0;R[1][2]=+1;
R[0][3]=+1;R[1][3]=0;

//Queen
Q[0][0]=0;Q[1][0]=-1;
Q[0][1]=-1;Q[1][1]=-1;
Q[0][2]=-1;Q[1][2]=0;
Q[0][3]=-1;Q[1][3]=+1;
Q[0][4]=0;Q[1][4]=+1;
Q[0][5]=+1;Q[1][5]=+1;
Q[0][6]=+1;Q[1][6]=0;
Q[0][7]=+1;Q[1][7]=-1;





    int n=1,x=0;
    while(!x)
    {
        vector<int>row,col;
        row.clear();
        col.clear();
        int count=0;
        int blackrow,blackcol,whiterow,whitecol;
        int i,j;
        char board[9][9];
        int sol[9][9];
        fr(i,0,7)
        {
            scanf("%s",board[i]);
            fr(j,0,7)
            {
                if(board[i][j]!='.' &&board[i][j]!='k' &&board[i][j]!='K'  )
                {
                    row.pb(i);
                    col.pb(j);
                    count++;
                    sol[i][j]=0;
                }
                else if(board[i][j]=='k')
                {
					count++;
                    blackrow=i;
                    blackcol=j;
                }
                else if(board[i][j]=='K')
                {
					count++;
                    whiterow=i;
                    whitecol=j;
                }
            }
        }
        int flag=0;
        int black=0,white=0;
        if(count==0)
        {
            break;
        }
        else
        {
            int tr,tc;
            int tmpR,tmpC;
            int len=row.size()-1;
            fr(i,0,len)
            {
                tr=row[i];
                tc=col[i];

                int tempR=tr,tempC=tc;
                if(board[tr][tc]=='p')
                {
                    //printf("%c\n",board[tr][tc]);
                    fr(j,0,1)
                    {
                        tempR=tr;
                        tempC=tc;
                        tempR+=p[0][j];
                        tempC+=p[1][j];
                        if(tempR==whiterow&&tempC==whitecol)
                        {
                            flag=1;
                            white=1;
                            j+=100;
                        }
                    }
                    //printf("%d %d %d\n",flag,white,black);
                }
                else if(board[tr][tc]=='P')
                {
                    //printf("%c\n",board[tr][tc]);
                    fr(j,0,1)
                    {
                        tempR=tr;
                        tempC=tc;
                        tempR+=P[0][j];
                        tempC+=P[1][j];
                        if(tempR==blackrow&&tempC==blackcol)
                        {
                            flag=1;
                            black=1;
                            j+=100;
                        }
                    }
                    //printf("%d %d %d\n",flag,white,black);
                }
                else if(board[tr][tc]=='n'||board[tr][tc]=='N')
                {
                    //printf("%c\n",board[tr][tc]);
                    fr(j,0,7)
                    {
                        tempR=tr;
                        tempC=tc;
                       // printf("%d %d\n",tempR,tempC);
                        tempR+=N[0][j];
                        tempC+=N[1][j];
                        if(tempR==blackrow&&tempC==blackcol&& board[tr][tc]=='N')
                        {
                            flag=1;
                            black=1;
                            j+=100;
                        }
                        else if(tempR==whiterow&&tempC==whitecol&&board[tr][tc]=='n')
                        {
                            //printf("paisi\n");
                            flag=1;
                            white=1;
                            j+=100;
                        }
                    }
                    //printf("%d %d %d\n",flag,white,black);
                }
                else if(board[tr][tc]=='b'||board[tr][tc]=='B')
                {
                    //printf("%c\n",board[tr][tc]);
                    fr(j,0,3)
                    {
                        tmpR=tempR;
                        tmpC=tempC;
                        while(tmpR>=0 && tmpC>=0 && tmpR<=7&& tmpC<=7)
                        {
							//printf("%d %d\n",tmpR,tmpC);
                            tmpR+=B[0][j];
                            tmpC+=B[1][j];
                            if(tmpR==blackrow&&tmpC==blackcol&& board[tr][tc]=='B')
                            {
                                flag=1;
                                black=1;
                                j+=100;
                            }
                            else if(tmpR==whiterow&&tmpC==whitecol&&board[tr][tc]=='b')
                            {
                                flag=1;
                                white=1;
                                j+=100;
                            }
                            if(board[tmpR][tmpC]!='.')
                            {
                                tmpR=-1;
                            }
                        }
                        if(flag==1)
                        {
                            j+=9;
                        }
                    }
                    //printf("%d %d %d\n",flag,white,black);
                }
                else if(board[tr][tc]=='r'||board[tr][tc]=='R')
                {
                    //printf("%c\n",board[tr][tc]);
                    fr(j,0,3)
                    {
                        tmpR=tempR;
                        tmpC=tempC;
                        while(tmpR>=0 && tmpC>=0 && tmpR<=7&& tmpC<=7)
                        {
                            tmpR+=R[0][j];
                            tmpC+=R[1][j];
                            if(tmpR==blackrow&&tmpC==blackcol&& board[tr][tc]=='R')
                            {
                                flag=1;
                                black=1;
                                j+=100;
                            }
                            else if(tmpR==whiterow&&tmpC==whitecol&&board[tr][tc]=='r')
                            {
                                flag=1;
                                white=1;
                                j+=100;
                            }
                            if(board[tmpR][tmpC]!='.')
                            {
                                tmpR=-1;
                            }
                        }
                        if(flag==1)
                        {
                            j+=9;
                        }
                    }
                    //printf("%d %d %d\n",flag,white,black);
                }
                else if(board[tr][tc]=='q'||board[tr][tc]=='Q')
                {
                    //printf("%c\n",board[tr][tc]);
                    fr(j,0,7)
                    {
                        tmpR=tempR;
                        tmpC=tempC;
                        while(tmpR>=0 && tmpC>=0 && tmpR<=7&& tmpC<=7)
                        {
                            tmpR+=Q[0][j];
                            tmpC+=Q[1][j];
                            if(tmpR==blackrow&&tmpC==blackcol&& board[tr][tc]=='Q')
                            {
                                flag=1;
                                black=1;
                                j+=100;
                            }
                            else if(tmpR==whiterow&&tmpC==whitecol&&board[tr][tc]=='q')
                            {
                                flag=1;
                                white=1;
                                j+=100;
                            }
                            if(board[tmpR][tmpC]!='.')
                            {
                                tmpR=-1;
                            }
                        }
                        if(flag==1)
                        {
                            j+=9;
                        }
                    }
                    //printf("%d %d %d\n",flag,white,black);
                }
                if(flag==1)
                {
                    i+=len;
                }
            }
        }
        if(black==1)
        {
            printf("Game #%d: black king is in check.\n",n);
        }
        else if(white==1 ||(white==1&& black==1))
        {
            printf("Game #%d: white king is in check.\n",n);
        }
        else if(black==0 && white==0)
        {
            printf("Game #%d: no king is in check.\n",n);
        }
        n++;
        if(count==0)
        {
            x=1;
        }
    }

    return 0;
}
