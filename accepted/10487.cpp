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

    long long int n,q,i,j,num[1010],dif1,dif2,query,ans,nCase=1,temp;

    while(scanf("%lld",&n)==1&&n!=0)
    {
        ans=0;
        vector<long long int>V;
        V.clear();
        mem(num,0);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&num[i]);
        }

        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {

                    V.pb((num[i]+num[j]));
            }
        }

        sort(V.begin(),V.end());

       /* for(j=0;j<V.size();j++)
            printf(" %lld",V[j]);
        printf("\n");*/

        scanf("%lld",&q);
        printf("Case %lld:\n",nCase);
        nCase++;
        for(i=1;i<=q;i++)
        {
            scanf("%lld",&query);
            ans=0;
            for(j=0;j<V.size();j++)
            {
                if(V.size()==1)
                {
                    ans=V[0];
                    break;
                }
                else if(V[j]==query)
                {
                    ans=V[j];
                    break;
                }
                else if(V[j]>query&&j!=0)
                {
                    dif1=V[j]-query;
                    dif2=query-V[j-1];
                    if(dif1>dif2)
                    {
                        ans=V[j-1];
                    }
                    else
                    {
                        ans=V[j];
                    }
                    break;
                }
                else if(V[j]>query&&j==0)
                {
                    ans=V[j];
                    break;
                }
            }
            if(j==V.size())
            {
                ans=V[j-1];
            }
            printf("Closest sum to %lld is %lld.\n",query,ans);
        }
    }
    return 0;
}
