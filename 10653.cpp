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

LL row,col,data[1005][1005],visited[1005][1005],step,taken[1005][1005];
VLL tempR,tempC,R,C;

bool valid(LL r,LL c)
{
    bool flag=true;
    if(visited[r][c]==1)
    {
        flag=false;
    }
    if(data[r][c]==1)
    {
        flag=false;
    }
    if(r<1||r>row||c<1||c>col)
    {
        flag=false;
    }
    if(taken[r][c]==1)
    {
        flag=false;
    }

    return flag;
}

LL travarse(LL sr,LL sc,LL dr,LL dc)
{

    LL step=0,nowr,nowc,i;
    visited[sr][sc]=1;
    R.pb(sr);
    C.pb(sc);
    while(!R.empty())
    {
        fr(i,0,R.size()-1)
        {
            nowr=R[i];
            nowc=C[i];
            visited[nowr][nowc]=1;
            if(nowr==dr&&nowc==dc)
            {
                return step;
            }
            else
            {
                if(valid(nowr,nowc-1))
                {
                    tempR.pb(nowr);
                    tempC.pb(nowc-1);
                    taken[nowr][nowc-1]=1;
                }
                if(valid(nowr,nowc+1))
                {
                    tempR.pb(nowr);
                    tempC.pb(nowc+1);
                    taken[nowr][nowc+1]=1;
                }
                if(valid(nowr+1,nowc))
                {
                    tempR.pb(nowr+1);
                    tempC.pb(nowc);
                    taken[nowr+1][nowc]=1;
                }
                if(valid(nowr-1,nowc))
                {
                    tempR.pb(nowr-1);
                    tempC.pb(nowc);
                    taken[nowr-1][nowc]=1;
                }

            }
        }
        R.clear();
        R=tempR;
        tempR.clear();
        C.clear();
        C=tempC;
        tempC.clear();
        step++;
    }
    return step;
}

void init()
{
    mem(taken,0);
    mem(visited,0);
    mem(data,0);
    R.clear();
    C.clear();
    tempR.clear();
    tempC.clear();
}

int main()
{
    LL counter,bomb,row_num,n,col_num,src_row,src_col,time,i,j,dst_row,dst_col;
    while(scanf("%lld %lld",&row,&col)==2&&row!=0&&col!=0)
    {
        init();
        counter=0;
        scanf("%lld",&bomb);
        fr(i,1,bomb)
        {
            scanf("%lld %lld",&row_num,&n);
            fr(j,1,n)
            {
                scanf("%lld",&col_num);
                data[row_num+1][col_num+1]=1;
            }
        }
        scanf("%lld %lld",&src_row,&src_col);
        scanf("%lld %lld",&dst_row,&dst_col);

        time=travarse(src_row+1,src_col+1,dst_row+1,dst_col+1);

        printf("%lld\n",time);
    }

    return 0;
}
