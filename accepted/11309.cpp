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

int table[2369];

void gen()
{
    mem(table,0);
    table[0]=1;
    int j,i=2359;
    int a1,a2,b1,b2,prev=0;
    while(i>=0)
    {
        for(j=i;j>=i-59;j--)
        {
            a1=j/1000;
            a2=j%10;
            b1=j/100;
            b1=b1%10;
            b2=j%100;
            b2=b2/10;
            if(a1==0 && b1==0 && b2==0)
            {
                table[j]=prev;
                prev=j;
            }
            else if(a1==0 && b1==0 && b2!=0)
            {
                if((b2==a2))
                {
                    table[j]=prev;
                    prev=j;
                }
                else
                {
                    table[j]=prev;
                }
            }
            else if(a1==0 && b1!=0)
            {
                if(a2==b1)
                {
                    table[j]=prev;
                    prev=j;
                }
                else
                {
                    table[j]=prev;
                }
            }
            else
            {
                if(a1==a2 && b1==b2)
                {
                    table[j]=prev;
                    prev=j;
                }
                else
                {
                    table[j]=prev;
                }
            }
        }
        i-=100;
    }
    return ;
}
int main()
{
    gen();

    int n,t;
    scanf("%d",&t);
    fr(n,1,t)
    {
        int temp1,temp2,temp;
        char ch;
        int ans,ans2,ans1;
        scanf("%d%c%d",&temp1,&ch,&temp2);
        temp=temp1*100;
        temp+=temp2;
        //printf("%d\n",temp);
        ans=table[temp];
        //printf("%d\n",ans);

        ans1=ans/100;
        ans2=ans%100;
        if(ans1<10)
        {
            printf("0%d:",ans1);
        }
        else
        {
            printf("%d:",ans1);
        }
        if(ans2<10)
        {
            printf("0%d\n",ans2);
        }
        else
        {
            printf("%d\n",ans2);
        }
        //printf("%d:%d\n",ans/100,ans%100);
    }

    return 0;
}
