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


LL kap[40001];

LL isKap(LL n)
{
    LL m,a,b,x,k,flag=0;
    m=n*n;
    x=m;
    k=10;
    while(x!=0)
    {
        a=m/k;
        b=m%k;
        if(((a+b)==n)&&(a!=0&&b!=0))
        {
            flag=1;
            break;
        }
        x=x/10;
        k=k*10;
    }
    return flag;
}

void genKap()
{
    LL i,j,k,counter=0;
    fr(i,1,40000)
    {
        kap[i]=isKap(i);
    }
}

int main()
{
    mem(kap,0);
    genKap();

    LL tCase,nCase,i,j,L,U;
    scanf("%lld",&tCase);
    fr(nCase,1,tCase)
    {
        scanf("%lld %lld",&L,&U);
        printf("case #%lld\n",nCase);
        LL flag=0;
        fr(i,L,U)
        {
            if(kap[i]==1)
            {
                flag=1;
                printf("%lld\n",i);
            }
        }
        if(flag==0)
        {
            printf("no kaprekar numbers\n");
        }
        if(nCase!=tCase)
            printf("\n");
    }

    return 0;
}
