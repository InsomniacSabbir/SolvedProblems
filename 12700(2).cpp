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


int main()
{
    LL tCase,nCase,i,j,k,B,W,n;
    char ch,str[100000];
    scanf("%lld",&tCase);
    fr(nCase,1,tCase)
    {
        LL draw=0;
        B=0;
        W=0;
        scanf("%lld",&n);
        getchar();
        gets(str);
        fr(i,0,n-1)
        {
            if(str[i]=='B')
            {
                B++;
            }
            else if(str[i]=='W')
            {
                W++;
            }
            if(str[i]=='T')
            {
                draw++;
            }
        }
        if(draw==0&&B==0&&W==0)
        {
            printf("Case %lld: ABANDONED\n",nCase);
        }
        else if(B!=0&&W==0&&draw==0)
        {
            printf("Case %lld: BANGLAWASH\n",nCase);
        }
        else if(B==0&&W!=0&&draw==0)
        {
            printf("Case %lld: WHITEWASH\n",nCase);
        }
        else if(B>W&&(W!=0||draw!=0))
        {
            printf("Case %lld: BANGLADESH %lld - %lld\n",nCase,B,W);
        }
        else if(B<W&&(B!=0||draw!=0))
        {
            printf("Case %lld: WWW %lld - %lld\n",nCase,W,B);
        }
        else if(B==W&&(draw!=0||B!=0))
        {
            printf("Case %lld: DRAW %lld %lld\n",nCase,B,draw);
        }
    }


    return 0;
}
